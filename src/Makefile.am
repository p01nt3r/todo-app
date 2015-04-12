
AUTOMAKE_OPTIONS = subdir-objects
ACLOCAL_AMFLAGS = -I m4
AM_CFLAGS = -I$(top_srcdir)/src 
LDADD = 

if USE_GTK
AM_CFLAGS += @GTK_CFLAGS@
LDADD += @GTK_LIBS@
endif

RESOURCES_PATH = $(srcdir)/resources
INTERFACE_PATH = $(srcdir)/interface
MODEL_PATH = $(srcdir)/model

bin_PROGRAMS = todo-app
todo_app_SOURCES = mainwindow.c 
todo_app_LDADD = $(INTERFACE_PATH)/libinterface.la $(MODEL_PATH)/libmodel.la $(LDADD)
todo_app_CFLAGS = -I$(RESOURCES_PATH) $(AM_CFLAGS)

SUBDIRS = interface model .

DIST_SUBDIRS = $(SUBDIRS)

