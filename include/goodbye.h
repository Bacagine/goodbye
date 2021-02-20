/* goodbye.h: Header with constants and functions for goodbye
 * 
 * goodbye is a software created to teste Gnu Autotools
 * and Linux Packaging
 * 
 * Developed by Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 * 
 * Date: 20/Feb/2021
 */

#ifndef _GOODBYE_H
#define _GOODBYE_H

#define VERSION     "0.2"
#define HELP        "-h, --help\tdisplay this help and exit\n\
-v, --version\tdisplay version information and exit\n\
-t, --traditional\tuse traditional greeting\n\
-g, --greeting=TEXT"
#define TRADICIONAL "goodbye word!!!"

/* Default message */
static const char goodbye_msg[16] = "Goodbye World!!!";

/* Show a message in terminal */
void say_goodbye(const char *str);


#endif
