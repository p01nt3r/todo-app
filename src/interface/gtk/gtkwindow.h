/*
 * =====================================================================================
 *
 *       Filename:  gtkWindow.h
 *
 *    Description:  Header file for the gtk window
 *
 *        Version:  1.0
 *        Created:  24/01/15 17:08:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kleomar Almeida (p01nt3r), kleomar@gmail.com
 *        Company:  N/A
 *
 * =====================================================================================
 */

#include <gtk/gtk.h>
#include <stdbool.h>
#include <errno.h>

#include <resources/constants.h>

#define DEFAULT_WINDOW_WIDTH_SIZE 768
#define DEFAULT_WINDOW_HEIGHT_SIZE 500

typedef struct window_size{
    int width;
    int height;
}window_size;

int showGtkMainWindow(int* p_argc, char *argv[]);
GtkWidget *myTopWindow (int* p_argc, char *argv[], window_size *size);
void setWindowTitle (GtkWidget *window, const char *message);
GdkPixbuf *create_pixbuf(const gchar * filename);

