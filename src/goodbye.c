#include <stdio.h>
#include "../include/goodbye.h"

void say_goodbye(void){
    int i =0;
    while(i < 16){
        putchar(goodbye_msg[i]);
        i++;
    }
    putchar('\n');
}
