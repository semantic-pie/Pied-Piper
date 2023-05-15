/*
 * This source file is part of an OSTIS project. For the latest info, see http://ostis.net
 * Distributed under the MIT License
 * (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
 */

#include "config.h"
#include "mainwindow.h"

#include <QApplication>
#include <QTranslator>

#include <QDir>

#include <QSettings>


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // Disable text scaling https://www.charlesodale.com/setting-qt-to-ignore-windows-dpi-text-size-personalization/
    QApplication::setAttribute(Qt::AA_Use96Dpi);

    QApplication::setOrganizationName("Pied Piper");
    QApplication::setOrganizationDomain("Pied Piper");
    QApplication::setApplicationName("Pied Piper");

    QApplication::setAttribute(Qt::AA_DontShowIconsInMenus, false);

    QDir binPath(QCoreApplication::applicationDirPath());

    /* Set working directory */
#ifdef Q_OS_MAC
    binPath.cdUp();    /* Fix for Mac because of the .app folder, */
    binPath.cdUp();    /* which means that the actual executable is   */
    binPath.cdUp();    /* three levels deep. Grrr.                    */
#endif

    QDir root_dir = binPath;

    //#if KBE_DEBUG_MODE
    //    root_dir.cdUp();
    //#endif
    Config::pathPlugins = root_dir;
    Config::pathPlugins.cd("plugIns");


    // Create splash screen
    //QSplashScreen splash(QPixmap(QFileInfo(QDir(Config::pathMedia), "splash.png").absoluteFilePath()));
    //splash.show();
    //a.processEvents();

    //splash.showMessage("Load Translation", Qt::AlignBottom | Qt::AlignHCenter);


    QTranslator myappTranslator;
    myappTranslator.load(":/media/translations/lang_" + QLocale::system().name() + ".qm");
    QApplication::installTranslator(&myappTranslator);

    //splash.showMessage(a.tr("Create interface"), Qt::AlignBottom | Qt::AlignHCenter);
    MainWindow::getInstance()->show();

    QApplication::processEvents();

    for (int i = 1; i < argc; i++) {
        QString arg = QApplication::arguments().at(i);
        MainWindow::getInstance()->load(arg);
    }

    QDir dir(QCoreApplication::applicationDirPath());
    dir.mkdir("templates");
    QSettings settings;
    settings.setValue("templateStorage", dir.absolutePath() + "/templates/");
    // check if startup dialog property exist
    if (!settings.contains(Config::settingsShowStartupDialog))
        settings.setValue(Config::settingsShowStartupDialog, QVariant(true));

    MainWindow::getInstance()->updateWindowTitle();

    // show startup dialog
//    if (settings.value(SETTINGS_STARTUP_DIALOG_SHOW).toBool())
//    {
//        GuideDialog startDialog(MainWindow::getInstance());
//        startDialog.exec();
//    }

    //splash.finish(&w);
    return QApplication::exec();
}
