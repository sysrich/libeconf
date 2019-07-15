/*
  Author: Pascal Arlt <parlt@suse.com>
  Copyright (C) 2019 SUSE Linux GmbH

  Licensed under the GNU Lesser General Public License Version 2.1

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, see
  <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "keyfile.h"

// Combine file path and file name
char *combine_path_name(const char *file_path, const char *file_name);

// Remove whitespace from beginning and end, append string terminator
char *clearblank(size_t *vlen, char *string);

// Set default value defined in include/defines.h
void initialize(Key_File *key_file, size_t num);

// Return the lower case version of a string
char *toLowerCase(char *str);

// Turn given string into a hash value
size_t hashstring(char *str);

// Free memory allocated by key_file
void destroy(Key_File key_file);

// Wrapper function to free memory of merged file
void destroy_merged_file(Key_File merged_file);
