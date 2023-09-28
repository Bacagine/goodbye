/**
 * main.c: Main file of goodbye
 * 
 * goodbye is a software created to teste GNU Autotools
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
 * Written by Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 * 
 * Date: 22/Feb/2021
 * Date of last modification: 28/Sep/2023
 */

#include "../include/goodbye.h"
#include "../include/sys_constants.h"

const char *gkpszProgramName;

int main(int argc, char **argv)
{
  int iRsl = 0;
  
  /* Setting the name of program */
  gkpszProgramName = szGetProgramName(argv[0]);
  
  setlocale(LC_ALL, "");
  
  bindtextdomain(PACKAGE, LOCALEDIR);
  textdomain(PACKAGE);

  /* Checking and validate the command line arguments */
  if(!bCommandLineIsOK(argc, argv))
  {
    vPrintErrorMessage(_("Invalid use!\nPlease use %s -h to see help\n"), gkpszProgramName);

    exit(EXIT_FAILURE);
  }

  printf(_("Goodbye World!!!\n"));

  return iRsl;
}

