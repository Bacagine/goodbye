/* goodbye.h: Header with constants and functions for goodbye
 * 
 * goodbye is a software created to teste Gnu Autotools
 * and Linux Packaging
 * 
 * Copyright (C) 2021  Gustavo Bacagine
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, 
 * see <https://www.gnu.org/licenses/old-licenses/gpl-2.0.html>.
 * 
 * Developed by Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 * 
 * Date: 22/Feb/2021
 * Date of last modification: 13/Apr/2021
 */

#ifndef _GOODBYE_H
#define _GOODBYE_H

/* Set the program name */
void set_prog_name(char *prog_name, const char *str);

/* Show a help message in terminal */
void print_help(const char *prog_name);

/* Show the version of program */
void print_version(void);

#endif

