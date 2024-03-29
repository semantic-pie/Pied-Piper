# -------------------------------------------------
# Project created by QtCreator 2010-03-10T23:38:40
# -------------------------------------------------

DESTDIR = ../bin

QT      += xml widgets
macx: {
CONFIG += app_bundle
ICON = PiedPiper.icns
}
TEMPLATE = app
SOURCES += \
    mainwindow.cpp \
    main.cpp \
    extendedtabwidget.cpp \
    config.cpp \
    pluginmanager.cpp \
    guidedialog.cpp \
    newfiledialog.cpp \
    settingsdialog.cpp \

HEADERS += version.h \
    platform.h \
    mainwindow.h \
    extendedtabwidget.h \
    config.h \
    interfaces/plugininterface.h \
    pluginmanager.h \
    interfaces/editorinterface.h \
    guidedialog.h \
    newfiledialog.h \
    settingsdialog.h


FORMS += mainwindow.ui

RESOURCES     = kbe.qrc

TRANSLATIONS += media/translations/lang_en_EN.ts \
                media/translations/lang_ru_RU.ts

lrelease.input         = TRANSLATIONS
lrelease.output        = ${QMAKE_FILE_IN_PATH}/${QMAKE_FILE_IN_BASE}.qm
lrelease.commands      = $$[QT_INSTALL_BINS]/lrelease ${QMAKE_FILE_IN} -qm ${QMAKE_FILE_IN_PATH}/${QMAKE_FILE_IN_BASE}.qm
lrelease.CONFIG       += no_link target_predeps
QMAKE_EXTRA_COMPILERS += lrelease

RC_FILE = kbe.rc

OBJECTS_DIR = obj
MOC_DIR = moc