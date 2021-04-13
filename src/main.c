/* main.c: Main file of goodbye
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

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <libintl.h>
#include <config.h>
#include "../include/goodbye.h"
#include "../include/sys_constants.h"

int main(int argc, char **argv){
    if(argc == 1){
		setlocale(LC_ALL, "");
		
		bindtextdomain(PACKAGE, LOCALEDIR);
		textdomain(PACKAGE);
		
        printf(gettext("Goodbye World!!!\n"));
    }
    else if(argc == 2){
		if(!strcmp(argv[1], "-h") || !strcmp(argv[1], "--help")){
			print_version();
            print_help(argv[0]);
        }
        else if(!strcmp(argv[1], "-v") || !strcmp(argv[1], "--version")){
            print_version();
        }
        else if(!strcmp(argv[1], "-t") || !strcmp(argv[1], "--tradicional")){
			printf(gettext("goodbye world!!!\n"));
        }
        else{
            fprintf(stderr, gettext("\033[1;31mE:\033[m \033[1mInvalid use!\nPlease use %s -h to see help\033[m\n"), argv[0]);
            return 1;
        }
    }
    else if(argc == 3 && !strcmp(argv[1], "-g")){
            puts(gettext(argv[2]));
    }
    else{
        fprintf(stderr, gettext("\033[1;31mE:\033[m \033[1mInvalid use!\nPlease use %s -h to see help\033[m\n"), argv[0]);
        return 1;
    }
    
    return 0;
}

