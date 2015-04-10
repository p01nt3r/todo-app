AUTOMAKE_OPTIONS=subdir-objects
ACLOCAL_AMFLAGS=-I m4

AM_CFLAGS=@GTK_CFLAGS@
LDADD=@GTK_LIBS@

ROOT=.
RESOURCES_PATH=$(ROOT)/resources
INTERFACE_PATH=$(ROOT)/interface
MODEL_PATH=$(ROOT)/model

bin_PROGRAMS=todo-app
todo_app_SOURCES=mainwindow.c $(RESOURCES_PATH)/constants.h
todo_app_LDADD=$(INTERFACE_PATH)/libinterface.la $(MODEL_PATH)/libmodel.la

SUBDIRS=interface model
DIST_SUBDIRS=$(SUBDIRS)

