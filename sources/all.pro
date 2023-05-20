QT       += core

TEMPLATE = subdirs

CONFIG += ordered

DESTDIR = ./bin

SUBDIRS = plugins/scg \
           PiedPiper

#win32: SUBDIRS += updater
