
QT       += core

TEMPLATE = subdirs

CONFIG += ordered

DESTDIR = ./bin

SUBDIRS = plugins/scg \
          #plugins/scn \
         #plugins/scs \
          kbe
          #antlr3c/
#win32: SUBDIRS += updater
