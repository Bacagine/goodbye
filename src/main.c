/* main.c: Main file of goodbye
 * 
 * goodbye is a software created to teste Gnu Autotools
 * and Linux Packaging
 * 
 * Developed by Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 * 
 * Date: 20/Feb/2021
 */

#include <stdio.h>
#include <string.h>
#include <config.h>
#include "../include/goodbye.h"

int main(int argc, char **argv){
    if(argc == 1){
        say_goodbye(goodbye_msg);
    }
    else if(argc == 2){
        if(!strcmp(argv[1], "-h") || !strcmp(argv[1], "--help")){
            puts(VERSION);
            puts(HELP);
        }
        else if(!strcmp(argv[1], "-v") || !strcmp(argv[1], "--version")){
            puts(VERSION);
        }
        else if(!strcmp(argv[1], "-t") || !strcmp(argv[1], "--tradicional")){
            say_goodbye(TRADICIONAL);
        }
    }
    else{
        fprintf(stderr, "\033[;1;mE:\033[m Invalid use.\nPlease use %s -h to see help\n", argv[0]);
        return 1;
    }
    
    return 0;
}

