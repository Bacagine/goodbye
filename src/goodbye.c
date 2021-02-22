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
 */

#include <stdio.h>
#include <string.h>
#include "../include/goodbye.h"

void say_goodbye(const char *str){
    int i =0;
    while(i < strlen(str)-1){
        putchar(str[i]);
        i++;
    }
    putchar('\n');
}
