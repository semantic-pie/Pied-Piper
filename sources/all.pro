
QT       += core
QT += core5compat
TEMPLATE = subdirs

CONFIG += ordered

DESTDIR = ./bin

SUBDIRS = plugins/scg \
          #plugins/scn \
         #plugins/scs \
          PiedPiper
          #antlr3c/
#win32: SUBDIRS += updater
