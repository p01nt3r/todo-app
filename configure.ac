######################
#
# THE FIRST AUTOTOOLS
#
#####################

AC_INIT([ToDo],[1.0],[kleomar@gmail.com])

#libtool
AM_PROG_AR

AM_INIT_AUTOMAKE([-Wall -Werror foreign])
LT_INIT([disable-shared])
AM_MAINTAINER_MODE

#header files
AC_CONFIG_HEADERS([config.h])

#SRC dir
AC_CONFIG_SRCDIR([.])

AC_CONFIG_MACRO_DIRS([m4])
AC_CONFIG_FILES(Makefile interface/Makefile model/Makefile)

#GTK
GTK_REQUIRED_VERSION=2.0.0
AM_PATH_GTK_2_0($GTK_REQUIRED_VERSION,,AC_MSG_ERROR(windoe-default needs GTK+-2))

AC_ARG_ENABLE([gtk],
            AC_HELP_STRING([--enable-gtk],[Turn on GTK+ support (default is no)]),
            [case "${enableval}" in  
             yes) gtk=true ;;  
             no)  gtk=false ;;  
             *) AC_MSG_ERROR([bad value ${enableval} for --enable-debug]) ;; esac],
            [gtk=false])
AC_DEFINE(USE_GTK, [test x$gtk = xtrue], [use GTK+ support])
AM_CONDITIONAL([USE_GTK], [test x$gtk = xtrue])



#LIBS
AC_PROG_RANLIB

#Check for programs
AC_PROG_CC

AC_OUTPUT
