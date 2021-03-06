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

#ifndef DATATYPES_STATISTICS_H
#define DATATYPES_STATISTICS_H

/*----------------------------------------------------------------------------.
 | FILE STATISTICS DEFINITION                                                 |
 '----------------------------------------------------------------------------*/
typedef struct {
  unsigned char type;
  int objects;
  int strokes;
  int coordinates;
  int pressure;
  int tilt;
  int unknown;
  float top, right, bottom, left;
} dt_statistics;

#endif//DATATYPES_STATISTICS_H
