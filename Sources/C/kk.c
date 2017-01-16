/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * Prof. Marcelo Luiz Drumond Lanza
 * EEL 270 - Computacao II - Turma 2015/2
 *
 *
 * $Author$
 * $Date$
 * $Log$
 */

#define _XOPEN_SOURCE 500
#define KK_MANDATORY_OPTIONS 4
#define KK_ADMINISTRATOR_USER_IDENTIFIER 30328



#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <getopt.h>
#include <unistd.h>
#include <sys/types.h>

#include "kkFunctions.h"
#include "kkTypes.h"
#include "kkConfig.h"
#include "kkConst.h"
#include "kkErrors.h"
#include "kkUserInterfaces.h"

typedef enum
{
  kkEmailArgument,
  kkEmailConfirmationArgument,
  kkLanguageArgument,
  kkNicknameArgument,
  kkFullnameArgument,
  kkFullnameConfirmationArgument,
} kkArgumentIndex;



int main (int argc, char *argv [])
{
  int kkLongOption, kkShortOption, kkArgumentIndex, kkOptionsCounter;
  opterr = 0;
  char *kkArguments,*kkArgumentValue,*kkNickname; 

  kkUserIdentifierType kkUid;
  kkLanguageTypes kkLanguage;
  kkUserDataType kkUserData;

  char *kkShortOptions = "hNC";
  static struct option kkLongOptions [4] = {
    {"help", 1, NULL, 'h'},
    {"Ncurses", 0, NULL, 'N'},
    {"Configure", 1, NULL, 'C'},
    {NULL, 0, NULL, 0}
  };

  char *kkArgumentNames [ ] =
  {
    "email",
    "language",
    "nickname",
    "username",
    NULL
  };

  while ((kkShortOption = getopt_long (argc, argv, kkShortOptions, kkLongOptions, &kkLongOption)) != -1)
  {
    switch (kkShortOption)
    {
      case 'C':
        while (optind < argc)
        {
          kkArguments= argv [optind];
          kkArgumentIndex = getsubopt (&kkArguments, kkArgumentNames, &kkArgumentValue);
          switch (kkArgumentIndex)
         {
            case kkEmailArgument:
              strcpy(kkUserData.kkEmail,kkArgumentValue);
              kkOptionsCounter++;
            break;

            case kkEmailConfirmationArgument:
              strcpy(kkUserData.kkEmailConfirmation,kkArgumentValue);
              kkOptionsCounter++;
            break;

            case kkLanguageArgument:
              if (strcmp(kkArgumentValue,"portuguese"))
                kkLanguage=kkPortuguese;
              else
                kkLanguage=kkEnglish;
            break;

            case kkFullnameArgument:
              kkOptionsCounter++;
              strcpy(kkUserData.kkFullname,kkArgumentValue);
            break;

            case kkFullnameConfirmationArgument:
              kkOptionsCounter++;
              strcpy(kkUserData.kkFullnameConfirmation,kkArgumentValue);
            break;

            default:
              printf ("Invalid Option\n");
          }
          if(kkOptionsCounter!=KK_MANDATORY_OPTIONS)
            exit(kkMissingOptions);
          optind++;
          kkUid=getuid();
          if (kkUid!=KK_ADMINISTRATOR_USER_IDENTIFIER)
            exit(kkPermissionDenied);

          printf("%s",KkGetCliUserInterfaceMessage(kkGetPassword,kkLanguage)); 
          strcpy(kkUserData.kkPassword,getpass(""));         
          printf("%s",KkGetCliUserInterfaceMessage(kkConfirmPassword,kkLanguage)); 
          strcpy(kkUserData.kkPasswordConfirmation,getpass(""));

          kkUserData.kkUid=0;
          kkUserData.kkNickname[1]='\0';
          //kkUserData.kkPassword=kkPassword;
          //kkPasswordConfirmation=kkPasswordConfirmation;
          kkUserData.kkProfile=kkUser;
          //kkUserData.kkFullName=kkFullname;
          //kkUserData.kkFullNameConfirmation=kkFullnameConfirmation;
          //kkUserData.kkEmail=kkEmail;
          //kkUserData.kkEmailConfirmation=kkEmailConfirmation;
          kkUserData.kkNextUser=NULL;
          kkUserData.kkPreviousUser=NULL;
 
          
         // KkAddUser (&kkUserData); 
        }
      break;

      case 'h':
        while (optind < argc)
        {
          kkArguments= argv [optind];
          kkArgumentIndex = getsubopt (&kkArguments, kkArgumentNames, &kkArgumentValue);
          switch (kkArgumentIndex)
          {
            case kkLanguageArgument:
              if (strcmp(kkArgumentValue,"portuguese"))
                kkLanguage=kkPortuguese;
              else
                 kkLanguage=kkEnglish;
            break;

            default:
              kkLanguage=kkEnglish; 
          } 
          optind++;
          //KkShowCliHelp(kkLanguage);                
        }
      break;

      case 'N':
        while (optind < argc)
        {
          kkArguments= argv [optind];
          kkArgumentIndex = getsubopt (&kkArguments, kkArgumentNames, &kkArgumentValue);
          switch (kkArgumentIndex)
          {
            case kkLanguageArgument:
              if (strcmp(kkArgumentValue,"portuguese"))
                kkLanguage=kkPortuguese;
              else
                 kkLanguage=kkEnglish;
            break;

            case kkNicknameArgument:
              kkNickname=kkArgumentValue;
              printf ("Nickname: \"%s\"\n", kkNickname);
            break;

           default:
             kkLanguage=kkEnglish;
             kkNickname=kkArgumentValue;
          } 
          optind++;
          //KkRunNcursesInterface(kkLanguage, kkNickname);
        }
      break;

      default:
        printf ("Opcao invalida\n");
    } 
  }

return kkOk; 
}

/* $RCSfile$ */ 
