/*
 * This source file is part of an OSTIS project. For the latest info, see http://ostis.net
 * Distributed under the MIT License
 * (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
 */

#include "mainwindow.h"
#include "scgview.h"
#include "scgnode.h"
#include "scgpair.h"
#include "scgcontour.h"
#include "scgcontentchangedialog.h"
#include "scgwindow.h"
#include "scgtypedialog.h"

#include <cmath>
#include <QUrl>
#include <QContextMenuEvent>
#include <QMenu>
#include <QScrollBar>
#include <QDialog>
#include <QLabel>
#include <QDialogButtonBox>
#include <QLineEdit>
#include <QLayout>
#include <QCompleter>
#include <QFileInfo>
#include<QSettings>

SCgView::SCgView(QWidget *parent, SCgWindow *window) :
        QGraphicsView(parent),
        mActionChangeContent(nullptr),
        mActionShowContent(nullptr),
        mActionShowAllContent(nullptr),
        mActionHideAllContent(nullptr),
        mActionDeleteContent(nullptr),
        mActionSaveTemp(nullptr),
        mActionChangeIdtf(nullptr),
        mActionDelete(nullptr),
        mActionContourDelete(nullptr),
        mActionSwapPairOrient(nullptr),
        mActionCopy(nullptr),
        mActionCut(nullptr),
        mActionPaste(nullptr),
        mActionSelectAll(nullptr),
        mContextMenu(nullptr),
        mContextObject(nullptr),
        mWindow(window),
        isSceneRectControlled(false) {
    setCacheMode(CacheNone);//CacheBackground);
    setViewportUpdateMode(BoundingRectViewportUpdate);
    setRenderHint(QPainter::Antialiasing);
    setTransformationAnchor(AnchorUnderMouse);
    setResizeAnchor(AnchorViewCenter);
    setOptimizationFlag(DontAdjustForAntialiasing);
    setDragMode(QGraphicsView::RubberBandDrag);
    setAcceptDrops(true);
    connect(mWindow->undoStack(), SIGNAL(indexChanged(int)), this, SLOT(updateActionsState(int)));
    createActions();
}

SCgView::~SCgView() {
    delete mContextMenu;
    mContextObject = nullptr;
}

void SCgView::createActions() {
    QList<QKeySequence> shortcuts;

    auto *sep = new QAction(this);
    sep->setSeparator(true);
    mActionsList.append(sep);

    mActionSaveTemp = new QAction(tr("Save as template"), mWindow);
    mWindow->addAction(mActionSaveTemp);
    connect(mActionSaveTemp, SIGNAL(triggered(bool)), this, SLOT(showSaveTempDialog()));
    mActionChangeType = new QAction(tr("Select type"), mWindow);
    shortcuts << Qt::Key_T << QKeySequence("Е");
    mActionChangeType->setShortcuts(shortcuts);
    shortcuts.clear();
    mWindow->addAction(mActionChangeType);
    connect(mActionChangeType, SIGNAL(triggered(bool)), this, SLOT(showTypeDialog()));

    mActionChangeContent = new QAction(SCgWindow::findIcon("edit-content-change.png"), tr("Set content"), mWindow);
    shortcuts << Qt::Key_C << QKeySequence(tr("С"));
    mActionChangeContent->setShortcuts(shortcuts);
    shortcuts.clear();
    mWindow->addAction(mActionChangeContent);
    connect(mActionChangeContent, SIGNAL(triggered()), this, SLOT(changeContent()));

    mActionShowContent = new QAction(tr("Show content"), mWindow);
    mActionShowContent->setCheckable(true);
    shortcuts << Qt::Key_H << QKeySequence("Р");
    mActionShowContent->setShortcuts(shortcuts);
    shortcuts.clear();
    mWindow->addAction(mActionShowContent);
    connect(mActionShowContent, SIGNAL(triggered(bool)), this, SLOT(setContentVisible(bool)));

    mActionShowAllContent = new QAction(tr("Show all content"), mWindow);
    connect(mActionShowAllContent, SIGNAL(triggered(bool)), this, SLOT(setContentVisible(bool)));

    mActionHideAllContent = new QAction(tr("Hide all content"), mWindow);
    connect(mActionHideAllContent, SIGNAL(triggered(bool)), this, SLOT(setContentVisible(bool)));

    mActionDeleteContent = new QAction(SCgWindow::findIcon("edit-content-delete.png"), tr("Delete content"), mWindow);
    mActionDeleteContent->setShortcut(Qt::Key_Backspace);
    mWindow->addAction(mActionDeleteContent);
    connect(mActionDeleteContent, SIGNAL(triggered()), this, SLOT(deleteContent()));

    mActionChangeIdtf = new QAction(SCgWindow::findIcon("edit-change-idtf.png"), tr("Change identifier"), mWindow);
    shortcuts << Qt::Key_I << QKeySequence("Ш");
    mActionChangeIdtf->setShortcuts(shortcuts);
    shortcuts.clear();
    mWindow->addAction(mActionChangeIdtf);
    connect(mActionChangeIdtf, SIGNAL(triggered()), this, SLOT(changeIdentifier()));

    mActionDelete = new QAction(QIcon::fromTheme("edit-delete", SCgWindow::findIcon("edit-delete.png")), tr("Delete"),
                                mWindow);
    mActionDelete->setShortcut(QKeySequence(Qt::CTRL | Qt::Key_Backspace));
    mWindow->addAction(mActionDelete);
    connect(mActionDelete, SIGNAL(triggered()), this, SLOT(deleteSelected()));

    mActionContourDelete = new QAction(SCgWindow::findIcon("edit-delete.png"), tr("Delete contour"), mWindow);
    mActionContourDelete->setShortcut(Qt::Key_Backspace);
    mWindow->addAction(mActionContourDelete);
    connect(mActionContourDelete, SIGNAL(triggered()), this, SLOT(deleteJustContour()));

    mActionSwapPairOrient = new QAction(SCgWindow::findIcon("edit-swap-pair.png"), tr("Swap orientation"), mWindow);
    shortcuts << Qt::Key_S << QKeySequence(tr("Ы"));
    mActionSwapPairOrient->setShortcuts(shortcuts);
    shortcuts.clear();
    mWindow->addAction(mActionSwapPairOrient);
    connect(mActionSwapPairOrient, SIGNAL(triggered()), this, SLOT(swapPairOrient()));

    mActionCopy = new QAction(QIcon::fromTheme("edit-copy", SCgWindow::findIcon("edit-copy.png")), tr("Copy"), this);
    mActionCopy->setShortcut(QKeySequence::Copy);

    mWindow->addAction(mActionCopy);
    connect(mActionCopy, SIGNAL(triggered()), mWindow, SLOT(copy()));

    mActionCut = new QAction(QIcon::fromTheme("edit-cut", SCgWindow::findIcon("edit-cut.png")), tr("Cut"), this);
    mActionCut->setShortcut(QKeySequence::Cut);
    mWindow->addAction(mActionCut);
    connect(mActionCut, SIGNAL(triggered()), mWindow, SLOT(cut()));

    mActionPaste = new QAction(QIcon::fromTheme("edit-paste", SCgWindow::findIcon("edit-paste.png")), tr("Paste"),
                               this);
    mActionPaste->setShortcut(QKeySequence::Paste);
    mWindow->addAction(mActionPaste);
    connect(mActionPaste, SIGNAL(triggered()), mWindow, SLOT(paste()));

    mActionSelectAll = new QAction(QIcon::fromTheme("edit-select-all", SCgWindow::findIcon("edit-select-all.png")),
                                   tr("Select All"), this);
    mActionSelectAll->setShortcut(QKeySequence::SelectAll);
    mWindow->addAction(mActionSelectAll);
    connect(mActionSelectAll, SIGNAL(triggered()), this, SLOT(selectAllCommand()));

    mActionsList.append(mActionChangeType);
    mActionsList.append(mActionChangeContent);
    mActionsList.append(mActionShowContent);
    mActionsList.append(mActionShowAllContent);
    mActionsList.append(mActionHideAllContent);
    mActionsList.append(mActionDeleteContent);
    mActionsList.append(mActionSaveTemp);
    sep = new QAction(this);
    sep->setSeparator(true);
    mActionsList.append(sep);

    mActionsList.append(mActionChangeIdtf);
    mActionsList.append(mActionSwapPairOrient);

    sep = new QAction(this);
    sep->setSeparator(true);
    mActionsList.append(sep);

    mActionsList.append(mActionCopy);
    mActionsList.append(mActionCut);
    mActionsList.append(mActionPaste);

    sep = new QAction(this);
    sep->setSeparator(true);
    mActionsList.append(sep);

    mActionsList.append(mActionSelectAll);

    sep = new QAction(this);
    sep->setSeparator(true);
    mActionsList.append(sep);

    mActionsList.append(mActionContourDelete);
    mActionsList.append(mActionDelete);
}

void SCgView::updateActionsState(int idx) {
    Q_UNUSED(idx)

    mContextObject = nullptr;

    QList<QGraphicsItem *> items = scene()->selectedItems();
    if (items.size() == 1)
        if (SCgObject::isSCgObjectType(items.first()->type()))
            mContextObject = dynamic_cast<SCgObject *>(items.first());

    bool const nodeType = (mContextObject) && (mContextObject->type() == SCgNode::Type);

    if (nodeType) {
        mActionChangeContent->setEnabled(true);
        mActionChangeContent->setVisible(true);
        auto *node = dynamic_cast<SCgNode *>(mContextObject);

        bool isContentData = node->isContentData();
        if (isContentData) {
            mActionChangeContent->setText(tr("Change content"));

            mActionShowContent->setChecked(node->isContentVisible());
        } else
            mActionChangeContent->setText(tr("Set content"));

        mActionDeleteContent->setEnabled(isContentData);
        mActionDeleteContent->setVisible(isContentData);

        mActionShowContent->setEnabled(isContentData);
        mActionShowContent->setVisible(isContentData);

    } else {
        mActionChangeContent->setEnabled(false);
        mActionChangeContent->setVisible(false);
        mActionShowContent->setEnabled(false);
        mActionShowContent->setVisible(false);
        mActionDeleteContent->setEnabled(false);
        mActionDeleteContent->setVisible(false);
    }

    bool const pairType = (mContextObject) && (mContextObject->type() == SCgPair::Type);

    mActionSwapPairOrient->setEnabled(pairType);
    mActionSwapPairOrient->setVisible(pairType);

    mActionChangeIdtf->setEnabled(mContextObject);
    mActionChangeIdtf->setVisible(mContextObject);

    bool const contourType = (mContextObject) && (mContextObject->type() == SCgContour::Type);

    mActionChangeType->setEnabled(nodeType || pairType || contourType);
    mActionChangeType->setVisible(nodeType || pairType || contourType);

    mActionContourDelete->setEnabled(contourType);
    mActionContourDelete->setVisible(contourType);

    bool isAnySelected = !scene()->selectedItems().isEmpty();
    mActionDelete->setEnabled(isAnySelected);
    mActionCut->setEnabled(isAnySelected);
    mActionCopy->setEnabled(isAnySelected);
    mActionSaveTemp->setEnabled(isAnySelected);

    //check for showed/hidden contents
    items = scene()->items();
    SCgNode *node;
    bool oneContentShowed = false, oneContentHidden = false;
    for (auto item : items) {
        node = qgraphicsitem_cast<SCgNode *>(item);
        if (node && node->isContentVisible())
            oneContentShowed = true;
        else if (node && !node->isContentVisible() && node->isContentData())
            oneContentHidden = true;
    }
    mActionShowAllContent->setEnabled(oneContentHidden);
    mActionHideAllContent->setEnabled(oneContentShowed);
}

QList<QAction *> SCgView::actions() const {
    return mActionsList;
}

void SCgView::contextMenuEvent(QContextMenuEvent *event) {
    if (event->reason() == QContextMenuEvent::Keyboard || event->reason() == QContextMenuEvent::Other)
        return;
    // get scg-object under mouse
    QPointF mousePos = mapToScene(event->pos());/* +
                                QPointF(horizontalScrollBar()->value(), verticalScrollBar()->value()) -
                                scene()->sceneRect().topLeft();*/

    SCgObject *object = dynamic_cast<SCgScene *>(scene())->objectAt(mousePos);

    // create context menu
    if (mContextMenu) {
        delete mContextMenu;
        mContextMenu = nullptr;
    }

    // selection by right mouse click
    if (object && !object->isSelected()) {
        scene()->clearSelection();
        object->setSelected(true);
    }

    // create new context menu
    mContextMenu = new QMenu;
    mContextMenu->addActions(mActionsList);

    mContextMenu->exec(event->globalPos());
}

void SCgView::selectAllCommand() const {
    QList<QGraphicsItem *> list = items();
    QList<QGraphicsItem *>::iterator it = list.begin();
    for (; it != list.end(); ++it)
        (*it)->setSelected(true);
}

void SCgView::keyPressEvent(QKeyEvent *event) {
    QGraphicsView::keyPressEvent(event);
}

void SCgView::keyReleaseEvent(QKeyEvent *event) {
    QGraphicsView::keyReleaseEvent(event);
}

void SCgView::mouseMoveEvent(QMouseEvent *event) {
    if (event->buttons() & Qt::MiddleButton) {
        viewport()->setCursor(Qt::ClosedHandCursor);
        QScrollBar *hBar = horizontalScrollBar();
        QScrollBar *vBar = verticalScrollBar();
        QPoint delta = event->pos() - mPrevMousePos;
        hBar->setValue(hBar->value() + (isRightToLeft() ? delta.x() : -delta.x()));
        vBar->setValue(vBar->value() - delta.y());
        mPrevMousePos = event->pos();
    }

    QGraphicsView::mouseMoveEvent(event);
}


void SCgView::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::MiddleButton) {
        viewport()->setCursor(Qt::OpenHandCursor);
        mPrevMousePos = event->pos();
    } else
        QGraphicsView::mousePressEvent(event);
}

void SCgView::mouseReleaseEvent(QMouseEvent *event) {
    if (event->button() == Qt::MiddleButton) {
        viewport()->setCursor(Qt::ArrowCursor);
        mPrevMousePos = event->pos();
    } else
        QGraphicsView::mouseReleaseEvent(event);
}


void SCgView::wheelEvent(QWheelEvent *event) {
    if (event->modifiers() == Qt::ControlModifier) {
        setScale(pow(2.0, event->angleDelta().y() / 280.0));
    } else
        QGraphicsView::wheelEvent(event);
}

void SCgView::deleteSelected() {
    dynamic_cast<SCgScene *>(scene())->deleteSelObjectsCommand();
}

void SCgView::deleteJustContour() {
    Q_ASSERT(mContextObject && mContextObject->type() == SCgContour::Type);

    auto *contour = dynamic_cast<SCgContour *>(mContextObject);
    dynamic_cast<SCgScene *>(scene())->deleteContourCommand(contour);
}

void SCgView::swapPairOrient() {
    Q_ASSERT(mContextObject && mContextObject->type() == SCgPair::Type);

    auto *pair = dynamic_cast<SCgPair *>(mContextObject);
    dynamic_cast<SCgScene *>(scene())->swapPairOrientCommand(pair);
}

void SCgView::changeIdentifier() {
    Q_ASSERT(mContextObject);

    QDialog dialog(this);
    dialog.setWindowTitle(tr("Change identifier"));

    auto *label = new QLabel(tr("New identifier:"), &dialog);
    auto *lineEdit = new QLineEdit(&dialog);

    auto *buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok
                                           | QDialogButtonBox::Cancel);
    buttonBox->setParent(&dialog);

    connect(buttonBox, SIGNAL(accepted()), &dialog, SLOT(accept()));
    connect(buttonBox, SIGNAL(rejected()), &dialog, SLOT(reject()));

    auto *layout = new QVBoxLayout;
    layout->addWidget(label);
    layout->addWidget(lineEdit);
    layout->addWidget(buttonBox);

    auto *completer = new QCompleter(dynamic_cast<SCgScene *>(scene())->idtfList(), &dialog);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    lineEdit->setCompleter(completer);
    QString oldIdtf = mContextObject->idtfValue();

    lineEdit->setText(oldIdtf);
    lineEdit->selectAll();

    dialog.setLayout(layout);
    lineEdit->setFocus();

    if (dialog.exec()) {
        QString newIdtf = lineEdit->text();
        if (oldIdtf != newIdtf)
            dynamic_cast<SCgScene *>(scene())->changeIdtfCommand(mContextObject, newIdtf);
    }
}


void SCgView::showSaveTempDialog() {
    QDialog dialog(this);
    dialog.setWindowTitle(tr("Save template"));
    auto *lineEdit = new QLineEdit(&dialog);
    auto *label = new QLabel(tr("File name:"), &dialog);

    auto *buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok
                                           | QDialogButtonBox::Cancel);
    buttonBox->setParent(&dialog);

    connect(buttonBox, SIGNAL(accepted()), &dialog, SLOT(accept()));
    connect(buttonBox, SIGNAL(rejected()), &dialog, SLOT(reject()));

    auto *layout = new QVBoxLayout;
    layout->addWidget(label);
    layout->addWidget(lineEdit);
    layout->addWidget(buttonBox);
    dialog.setLayout(layout);
    QSettings set;
    QString fileName;
    if (dialog.exec() == QDialog::Accepted) {
        fileName = set.value("templateStorage").toString() + lineEdit->text() + ".gwf";
        mWindow->saveTempToFile(fileName);
    }
}


void SCgView::showTypeDialog() {
    if (!mContextObject)
        return;

    SCgTypeSelectionDialog typeDialog(mContextObject->type());

    if (typeDialog.exec() == QDialog::Accepted)
        changeType(typeDialog.getChosenType());
}

void SCgView::changeType(const QString &newType) {
    Q_ASSERT(mContextObject);

    dynamic_cast<SCgScene *>(scene())->changeObjectTypeCommand(mContextObject, newType);
}

void SCgView::changeContent() {
    Q_ASSERT(mContextObject && mContextObject->type() == SCgNode::Type);
    auto *node = dynamic_cast<SCgNode *>(mContextObject);
    SCgContentChangeDialog dlg(node, this);

    if (dlg.exec() == QDialog::Accepted) {
        SCgContent::ContInfo info;
        dlg.contentInfo(info);
        if (node->contentType() != SCgContent::Empty || info.type != SCgContent::Empty)
            dynamic_cast<SCgScene *>(scene())->changeContentDataCommand(node, info);
    }
}

void SCgView::setContentVisible(bool visibility) {
    auto *_sender = dynamic_cast<QAction *>(sender());
    if (_sender == mActionShowContent) {
        Q_ASSERT(mContextObject && mContextObject->type() == SCgNode::Type);

        auto *node = dynamic_cast<SCgNode *>(mContextObject);

        if (visibility != node->isContentVisible())
            dynamic_cast<SCgScene *>(scene())->changeContentVisibilityCommand(node, visibility);
    } else if (_sender == mActionShowAllContent) {
        dynamic_cast<SCgScene *>(scene())->changeContentVisibilityCommand(nullptr, true, true);
    } else if (_sender == mActionHideAllContent) {
        dynamic_cast<SCgScene *>(scene())->changeContentVisibilityCommand(nullptr, false, true);
    }
}

void SCgView::deleteContent() {
    Q_ASSERT(mContextObject && mContextObject->type() == SCgNode::Type);

    auto *node = dynamic_cast<SCgNode *> (mContextObject);
    SCgContent::ContInfo empty;
    dynamic_cast<SCgScene *>(scene())->changeContentDataCommand(node, empty);
}

[[maybe_unused]] void SCgView::setScale(const QString &sc) {
    QTransform t = transform();
    //Default transform
    t.reset();

    //Getting percent value
    QString str = sc;
    str.remove("%");
    double d = str.toDouble() / 100.0;

    //Checking if value d in proper range
    if (d < SCgWindow::minScale)
        d = SCgWindow::minScale;
    else if (d > SCgWindow::maxScale)
        d = SCgWindow::maxScale;

    //Setting transformation
    setTransform(t.scale(d, d), false);

    emit(scaleChanged(transform().mapRect(QRectF(0, 0, 1, 1)).width()));
}

void SCgView::setScale(qreal scaleFactor) {
    // Factor, that will be set.
    qreal factor = transform().scale(scaleFactor, scaleFactor).mapRect(QRectF(0, 0, 1, 1)).width();

    if (factor < SCgWindow::minScale || factor > SCgWindow::maxScale) {
        // current zoom factor.
        qreal currFacror = transform().mapRect(QRectF(0, 0, 1, 1)).width();

        if (factor < SCgWindow::minScale)
            factor = SCgWindow::minScale;
        else
            factor = SCgWindow::maxScale;
        // calculates factor, that fit in proper range(0.2 .. 9.99)
        scaleFactor = factor / currFacror;
    }

    scale(scaleFactor, scaleFactor);

    emit(scaleChanged(factor));
}

void SCgView::setScene(SCgScene *scene) {
    QGraphicsView::setScene(scene);
    connect(scene, SIGNAL(sceneRectChanged(QRectF)), this, SLOT(updateSceneRect(QRectF)));
    connect(scene, SIGNAL(selectionChanged()), this, SLOT(updateActionsState()));
    connect(scene, SIGNAL(editModeChanged(int)), this, SLOT(editModeChanged(int)));
    updateActionsState();
}

void SCgView::updateSceneRect(const QRectF &rect) {
    if (!isSceneRectControlled && !sceneRect().contains(rect))
        isSceneRectControlled = true;

    if (isSceneRectControlled) {
        QPointF topLeft = mapToScene(0, 0);
        QPointF bottomRight = mapToScene(viewport()->width(), viewport()->height());
        QRectF vis(topLeft, bottomRight);
        QRectF result = rect.adjusted(-100, -100, 100, 100).united(vis).united(sceneRect());
        setSceneRect(result);

        emit sceneRectChanged(result);
    }
}

void SCgView::editModeChanged(int mode) {
    setContextMenuPolicy(mode == SCgScene::Mode_Select ? Qt::DefaultContextMenu : Qt::NoContextMenu);
}