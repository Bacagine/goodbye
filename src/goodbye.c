/* goodbye.c: Implematation of the say_goodbye function
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

#include <stdio.h>
#include <string.h>
#include <libintl.h>
#include <config.h>
#include "../include/goodbye.h"

void set_prog_name(char *prog_name, const char *str){
	strcpy(prog_name, str);
}

void print_help(const char *prog_name){
	printf(gettext("\
Usage %s [OPTION]...\n"), prog_name);
	
	fputs(gettext("\
	-h, --help\t\tdisplay this help and exit\n\
	-v, --version\t\tdisplay version information and exit\n\
	-t, --traditional\tuse traditional greeting\n\
	-g TEXT\t\t\tprint a TEXT\n"), stdout);
}

void print_version(void){
	printf("Goodbye %s\n", VERSION);
}

