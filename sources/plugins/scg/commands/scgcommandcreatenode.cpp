/*
 * This source file is part of an OSTIS project. For the latest info, see http://ostis.net
 * Distributed under the MIT License
 * (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
 */

#include "scgcommandcreatenode.h"
#include "scgnode.h"
#include "scgcontour.h"

SCgCommandCreateNode::SCgCommandCreateNode(SCgScene *scene,
                                           const QPointF &point,
                                           SCgContour *parentContour,
                                           QUndoCommand *parent)
    : SCgBaseCommand(scene, nullptr, parent)
    , mPoint(point)
    , mParentContour(parentContour)
{
    mObject = mScene->createSCgNode(mPoint);
    connect(mObject, SIGNAL(destroyed()), this, SLOT(nodeDestroyed()));

    setText(QObject::tr("Create node"));
}

SCgCommandCreateNode::~SCgCommandCreateNode()
{

        delete mObject;
}

void SCgCommandCreateNode::nodeDestroyed()
{
    mObject = nullptr;
}

void SCgCommandCreateNode::undo()
{
    Q_ASSERT_X(mObject != nullptr,
               "void SCgCommandCreateNode::undo()",
               "Node doesn't exists");

    mObject->setParentItem(nullptr);
    mScene->removeItem(mObject);
    mObject->setDead(true);

    SCgBaseCommand::undo();
}

void SCgCommandCreateNode::redo()
{
    Q_ASSERT_X(mObject != nullptr,
               "void SCgCommandCreateNode::redo()",
               "Node doesn't exists");

    if(mObject->scene() != mScene)
        mScene->addItem(mObject);

    mObject->setDead(false);

    if (mParentContour)
        mObject->setParentItem(mParentContour);

    SCgBaseCommand::redo();
}
