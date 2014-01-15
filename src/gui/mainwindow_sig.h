/*
 * Copyright (C) 2013  Roel Janssen <roel@moefel.org>
 *
 * This file is part of InklingReader
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GUI_MAINWINDOW_SIG_H
#define GUI_MAINWINDOW_SIG_H

#include <gtk/gtk.h>

char* gui_mainwindow_file_dialog (GtkWidget* parent, GtkFileChooserAction action);
void gui_mainwindow_file_activated (GtkWidget* widget, void* data);
void gui_mainwindow_directory_activated (GtkWidget* widget, void* data);
gboolean gui_mainwindow_document_view_draw (GtkWidget *widget, cairo_t *cr, void* data);

#endif//GUI_MAINWINDOW_SIG_H