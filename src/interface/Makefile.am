
AUTOMAKE_OPTIONS = subdir-objects

AM_CFLAGS =
LDADD =

noinst_LTLIBRARIES = libinterface.la


# CONSOLE
libinterface_la_SOURCES = console/consolewindow.c
include_HEADERS = console/consolewindow.h

# GTK
if USE_GTK
AM_CFLAGS += $(GTK_CFLAGS)
LDADD += $(GTK_LIBS)

libinterface_la_SOURCES += gtk/gtkwindow.c
include_HEADERS += gtk/gtkwindow.h
endif

# FLAGS
libinterface_la_CFLAGS = $(AM_CFLAGS)
libinterface_la_LIBADD = $(LDADD)
