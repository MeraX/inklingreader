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

#ifndef HIGH_CONVERSION_H
#define HIGH_CONVERSION_H

#include <glib.h>

void high_export_to_file (GSList* data, const char* to);
void high_convert_directory (const char* path, GSList* coordinates);
void high_merge_wpi_files (const char* first, const char* second);

#endif//DATATYPES_CONVERSION_H
