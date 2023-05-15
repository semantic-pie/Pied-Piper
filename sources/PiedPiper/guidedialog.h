/*
 * This source file is part of an OSTIS project. For the latest info, see http://ostis.net
 * Distributed under the MIT License
 * (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
 */

#pragma once

#include <QDialog>

class GuideDialog : public QDialog
{
    Q_OBJECT
public:
    explicit GuideDialog(QWidget *parent = nullptr);
    ~GuideDialog() override;
    
signals:
    
public slots:
    static void showStateChanged(int state);
};
