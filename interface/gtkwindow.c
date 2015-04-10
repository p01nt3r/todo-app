/*
 * =====================================================================================
 *
 *       Filename:  gtkWindow.c
 *
 *    Description:  The top most gtk window.
 *
 *        Version:  1.0
 *        Created:  24/01/15 17:03:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kleomar Almeida (p01nt3r), kleomar@gmail.com
 *        Company:  N/A
 *
 * =====================================================================================
 */

#include "gtkwindow.h"

int showGtkMainWindow (int* p_argc, char *argv[] )
{
    window_size size = {.width = DEFAULT_WINDOW_WIDTH_SIZE, 
        .height = DEFAULT_WINDOW_HEIGHT_SIZE};
    myTopWindow(p_argc, argv, &size);

    return EXIT_SUCCESS;
}   
/* ----------  end of function showGtkMainWindow  ---------- */


GtkWidget *myTopWindow (int* p_argc, char *argv[], window_size *size)
{

    //initialize the window
    gtk_init(p_argc, &argv);

    //allocate the window
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

    //define the window title
    setWindowTitle(window,"ToDO - Overview");

    //set the user size for window
    gtk_window_set_default_size(GTK_WINDOW(window), 
            DEFAULT_WINDOW_WIDTH_SIZE, DEFAULT_WINDOW_HEIGHT_SIZE);

    //set the positioning
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_NONE);

    //set the icon
    gtk_window_set_icon(GTK_WINDOW(window), create_pixbuf("web.png"));

    /* ----------------------------------
     *
     * add the callback to the signals
     *
     * ---------------------------------- */
    g_signal_connect_swapped(G_OBJECT(window), "destroy",
            G_CALLBACK(gtk_main_quit), NULL);

    //show a window
    gtk_widget_show(window);

    //run the main loop of gtk
    gtk_main();
    printf("test\n");
    return window;
}
/* -----  end of function myTopWindow  ----- */


void setWindowTitle (GtkWidget *window, const char *message )
{
    //define the title of the window
    gtk_window_set_title(GTK_WINDOW(window), message);

}
/* -----  end of function setWindowTitle  ----- */

GdkPixbuf *create_pixbuf(const gchar * filename)
{
    GdkPixbuf *pixbuf;
    GError *error = NULL;
    pixbuf = gdk_pixbuf_new_from_file(filename, &error);
    if(!pixbuf) {
        fprintf(stderr, "%s\n", error->message);
        g_error_free(error);
    }

    return pixbuf;
}
