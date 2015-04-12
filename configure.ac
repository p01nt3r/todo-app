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

AC_CONFIG_MACRO_DIRS([m4])
AC_CONFIG_FILES(Makefile 
                src/Makefile 
                src/interface/Makefile 
                src/model/Makefile) # interface/console/Makefile) 
#AC_CONFIG_SUBDIRS(src 
#                  src/interface 
#                  src/model)

#GTK
GTK_REQUIRED_VERSION=2.0.0

AC_ARG_ENABLE([gtk],
            AC_HELP_STRING([--enable-gtk],[Turn on GTK+ support (default is no)]),
            [use_gtk=true],
            [use_gtk=false])
AM_CONDITIONAL([USE_GTK], [test "$use_gtk" = "true"])

#AM_PATH_GTK_2_0($GTK_REQUIRED_VERSION,,AC_MSG_ERROR(windoe-default needs GTK+-2))

AS_IF([test "$use_gtk" != "false"],
      [AM_PATH_GTK_2_0($GTK_REQUIRED_VERSION,  
                         [AC_DEFINE(USE_GTK, 1, [use GTK+ support])],    
                         [AS_IF([test "$use_gtk" = "true"],      
                                [AC_MSG_ERROR([GTK+-2.0 required, but not found.])],
                                [u_gtk=no])
                         ])
      ])


#LIBS
AC_PROG_RANLIB
AC_PROG_LIBTOOL

#Check for programs
AC_PROG_CC

AC_OUTPUT
#(Makefile)
