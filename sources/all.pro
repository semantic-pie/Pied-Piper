QT       += core

TEMPLATE = subdirs

CONFIG += ordered

DESTDIR = ./bin

SUBDIRS = plugins/scg \
          #plugins/scn \
#          plugins/scs \
           PiedPiper

#win32: SUBDIRS += updater
