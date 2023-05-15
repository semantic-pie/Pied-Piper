/*
 * This source file is part of an OSTIS project. For the latest info, see http://ostis.net
 * Distributed under the MIT License
 * (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
 */

#include "guidedialog.h"
#include "config.h"

#include <QVBoxLayout>
#include <QTextBrowser>
#include <QCheckBox>
#include <QSettings>
#include <QPushButton>

GuideDialog::GuideDialog(QWidget *parent) :
        QDialog(parent) {
    auto *vlayout = new QVBoxLayout(this);

    auto *browser = new QTextBrowser(this);
    browser->setSource(QUrl("qrc:/media/startup/index.html"));

    vlayout->addWidget(browser);

    auto *hlayout = new QHBoxLayout(this);
    auto *showCheckBox = new QCheckBox(tr("Show on startup"), this);
    auto *closeButton = new QPushButton(tr("Close"), this);

    connect(closeButton, SIGNAL(clicked()), this, SLOT(accept()));
    connect(showCheckBox, SIGNAL(stateChanged(int)), this, SLOT(showStateChanged(int)));

    QSettings settings;
    showCheckBox->setChecked(settings.value(Config::settingsShowStartupDialog).toBool());

    hlayout->addWidget(showCheckBox);
    hlayout->addWidget(closeButton);

    vlayout->addLayout(hlayout);

    setLayout(vlayout);

    setFixedSize(575, 500);
}

GuideDialog::~GuideDialog() = default;

void GuideDialog::showStateChanged(int state) {
    QSettings settings;
    settings.setValue(Config::settingsShowStartupDialog, QVariant(state == Qt::Checked));
}
