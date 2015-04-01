/*
 * =====================================================================================
 *
 *       Filename:  mainWindow.c
 *
 *    Description:  File with the GTK+ main window.
 *
 *        Version:  1.0
 *        Created:  24/01/15 16:02:29
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


#include "interface/gtkwindow.h"


#define EXIT_SUCCESS 0

int main ( int argc, char *argv[] )
{
    window_size size = {.width = DEFAULT_WINDOW_WIDTH_SIZE, 
        .height = DEFAULT_WINDOW_HEIGHT_SIZE};
    GtkWidget *window = myTopWindow(argc, argv, &size);
    printf("return value: %p\n", window);
    
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
