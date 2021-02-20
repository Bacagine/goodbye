/* goodbye.c: Implematation of the say_goodbye function
 * 
 * goodbye is a software created to teste Gnu Autotools
 * and Linux Packaging
 * 
 * Developed by Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 * 
 * Date: 20/Feb/2021
 */

#include <stdio.h>
#include "../include/goodbye.h"

void say_goodbye(const char *str){
    int i =0;
    while(i < sizeof(str)){
        putchar(str[i]);
        i++;
    }
    putchar('\n');
}
