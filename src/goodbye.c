/**
 * goodbye.c: Implematation of the say_goodbye function
 * 
 * goodbye is a software created to teste GNU Autotools
 * and Linux Packaging
 * 
 * Copyright (C) 2021 - 2023 Gustavo Bacagine
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

int opterr = 0;
static const char *kszOptStr = "hvtg:";

char *szGetProgramName(const char *szPathName)
{
  char *pszProgramName = 0;
  
  if((pszProgramName = strrchr(szPathName, '/')) != 0)
  {
    ++pszProgramName; /* Skip '/' */
  }
  else
  {
    pszProgramName = (char *) szPathName; /* Nenhum dir. component */
  }

  return pszProgramName;
}

void vPrintUsage(void)
{
  int ii = 0;
    
  printf(_("Usage: %s [OPTION]...\n\n"
         "%s\n\n"
         "Options:\n"), gkpszProgramName, DESCRIPTION);
  while(astCmdOpt[ii].val != 0)
  {
    if(astCmdOpt[ii].has_arg == required_argument)
    {
      printf(_("  -%c <%s>\n"
             "    %s\n\n"), astCmdOpt[ii].val, kpszCmdArguments[ii],
                       kpszCmdMessages[ii]);
    }
    else
    {
      printf(_("  -%c, --%s\n"
             "    %s\n\n"), astCmdOpt[ii].val, astCmdOpt[ii].name,
                       kpszCmdMessages[ii]);
    }

    ii++;
  }
}

void vPrintVersion(void)
{
  printf(_("%s %s\n"
         "Build in %s %s\n"
         "%s %s\n"
         "For reporting bugs, send a e-mail to <%s>\n"
         "Github: %s\n"), gkpszProgramName, 
                          VERSION,
                          __DATE__,
                          __TIME__,
                          COPYRIGHT,
                          DEV_NAME,
                          DEV_MAIL,
                          GITHUB_URL
  );
}

bool bStrIsEmpty(const char *kpszStr)
{
  if(kpszStr == NULL || !strcmp(kpszStr, "") || !strcmp(kpszStr, "\n"))
  {
    return true;
  }
  
  return false;
}

bool bTerminalSupportColors(void)
{
  char *szTerm = getenv("TERM");
  
  if(bStrIsEmpty(szTerm) || !strcmp(szTerm, "dumb"))
  {
    return false;
  }
  
  return true;
}

void vPrintErrorMessage(const char *kpszFmt, ...)
{
  va_list args;
  char szMsg[256];
  
  memset(szMsg, 0, sizeof(szMsg));
   
  va_start(args, kpszFmt);
  
  /**
   * Check if the terminal suport colors
   */
  if(bTerminalSupportColors() == false)
  {
    sprintf(szMsg, _("E: %s\n"), kpszFmt);

    vfprintf(stderr, szMsg, args);
    return;
  }
  
  sprintf(szMsg, _("\033[1;31mE:\033[m %s\n"), kpszFmt);
  
  vfprintf(stderr, szMsg, args);

  va_end(args);
}

bool bCommandLineIsOK(int argc, char **argv)
{
  int iCmdLineOpt = 0;
  
  while((iCmdLineOpt = getopt_long(argc, argv, kszOptStr, astCmdOpt, NULL )) != -1)
  {
    switch(iCmdLineOpt)
    {
      case 'h':
        printf("%s %s\n", gkpszProgramName, VERSION);
        vPrintUsage();
        exit(EXIT_SUCCESS);
      case 'v':
        vPrintVersion();
        exit(EXIT_SUCCESS);
      case 't':
        printf(_("goodbye world!!!\n")); 
        break;
      case 'g':
        puts(optarg);
        break;
      case '?':
      default:
       return false; 
    }
  }

  return true;
}

