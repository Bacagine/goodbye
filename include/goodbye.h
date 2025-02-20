/**
 * goodbye.h: Header with constants and functions for goodbye
 * 
 * goodbye is a software created to teste GNU Autotools
 * and Linux Packaging
 * 
 * Copyright (C) 2021 - 2025 Gustavo Bacagine
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
 * Written by Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 * 
 * Date: 22/Feb/2021
 * Date of last modification: 28/Sep/2023
 */

#ifndef _GOODBYE_H
#define _GOODBYE_H

/******************************************************************************
 *                                                                            *
 *                                 Includes                                   *
 *                                                                            *
 ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <libintl.h>
#include <stdbool.h>
#include <stdarg.h>
#include <getopt.h>
#include <config.h>

/******************************************************************************
 *                                                                            *
 *                             Defines and macros                             *
 *                                                                            *
 ******************************************************************************/

/**
 * Program information defines
 */
#define DESCRIPTION    "goodbye is a software created to teste GNU Autotools and Linux Packaging"
#define COPYRIGHT      "Copyright (C) 2021 - 2025"
#define DEV_NAME       "Gustavo Bacagine"
#define DEV_MAIL       "gustavo.bacagine@protonmail.com"
#define GITHUB_URL     "https://www.github.com/Bacagine/goodbye"

/**
 * Program language defines
 */
#define _(STR) gettext(STR)
#define LOCALE_DIR ""

/******************************************************************************
 *                                                                            *
 *                           Command Line Options                             *
 *                                                                            *
 ******************************************************************************/

/**
 * Command line structure and strings
 */
static struct option astCmdOpt[] = {
  { "help"         , no_argument      ,    0, 'h' },
  { "version"      , no_argument      ,    0, 'v' },
  { "tradicional"  , no_argument      ,    0, 't' },
  { NULL           , required_argument,    0, 'g' },
  { NULL           , 0                , NULL,  0  }
};

/**
 * Arguments of command line options useds 
 * in usage message of program
 */
static const char *kpszCmdArguments[] = {
  NULL,
  NULL,
  NULL,
  "TEXT",
  NULL
};

/**
 * Help messages that showed in usage message
 * of program
 */
static const char *kpszCmdMessages[] = {
  "Show this help and exit",
  "Show the version information and exit",
  "Use traditional goodbye",
  "Print a TEXT",
  NULL
};

/******************************************************************************
 *                                                                            *
 *                     Global variables and constants                         *
 *                                                                            *
 ******************************************************************************/

/**
 * Receive the name of program
 */
extern const char *gkpszProgramName;

/******************************************************************************
 *                                                                            *
 *                            Prototype functions                             *
 *                                                                            *
 ******************************************************************************/

/**
 * This function is based in the examples of the book 
 * "Aprenda em 24 horas Programacao para Linux"
 */
char *szGetProgramName(const char *szPathName);

/**
 * Show a help message in terminal
 */
void vPrintUsage(void);

/**
 * Show the version of program
 */
void vPrintVersion(void);

/**
 * Check if a string is empty
 */
bool bStrIsEmpty(const char *kpszStr);

/**
 * Check if your terminal have support a colored text
 */
bool bTerminalSupportColors(void);

/**
 * Print a formatted error message
 */
void vPrintErrorMessage(const char *kpszFmt, ...);

/**
 * Check if what wass passed on the command line is valid
 */
bool bCommandLineIsOK(int argc, char **argv);

#endif /* _GOODBYE_H_ */

