/*
 * =====================================================================================
 *
 *       Filename:  mainwindow.c
 *
 *    Description:  File with the main code to run the program (be it in gtk or console)
 *
 *        Version:  1.0
 *        Created:  09/04/15 09:53:47
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kleomar Almeida (p01nt3r), kleomar@gmail.com
 *        Company:  N/A
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <errno.h>

#include "resources/constants.h"

#ifdef USE_GTK
#include "interface/gtkwindow.h"
#else
#include "interface/consolewindow.h"
#endif


int main (int argc, char *argv[])
{
    printf("starting\n");
#ifdef USE_GTK 
    showGtkMainWindow (&argc, argv);
#else
    showConsoleMainWindow();
#endif
    printf("ended\n");
    return EXIT_SUCCESS; 
}
