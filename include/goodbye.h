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
 */

#ifndef _GOODBYE_H
#define _GOODBYE_H

#define HELP        "-h, --help\t\tdisplay this help and exit\n\
-v, --version\t\tdisplay version information and exit\n\
-t, --traditional\tuse traditional greeting\n\
-g TEXT\t\tprint a TEXT"
#define TRADICIONAL "goodbye word!!!"

/* Default message */
static const char goodbye_msg[16] = "Goodbye World!!!";

/* Show a message in terminal */
void say_goodbye(const char *str);

#endif
