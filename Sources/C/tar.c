/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * Prof. Marcelo Luiz Drumond Lanza
 * EEL 270 - Computacao II - Turma 2015/2
 * Autor: Felipe Campos De Leo
 *
 * $Author$
 * $Date$
 * $Log$
 */

#define		_XOPEN_SOURCE	500
#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>
#include	<getopt.h>
#include  <string.h>
#include  <sys/types.h>
/* Adicionar Biblioteca Ncurses */

#include   "tarFunctions.h"
#include   "tarTypes.h"
#include   "tarConst.h"
#include   "tarConfig.h"
#include   "tarErrors.h"
#include   "tarUserInterface.h"

/* This file should implement all the CLI Code including the opt long and Ncurses */

/* Verify the correct names for the variables in english */
typedef enum
{
  tarEmailArgument,
  tarEmailConfirmationArgument,
  tarLanguageArgument,
  tarNicknameArgument,
  tarFullNameArgument,
  tarFullNameConfirmationArgument,
} tarArgumentIndex ;

int
main (int argc, char **argv)
{
  int tarLongOption, tarShortOption, tarArgumentIndex, tarOptionsCounter;
/* opterr = 0 | Disable Error Exibition Error */
  opterr = 0;
  char *tarArguments,*tarArgumentValue,*tarNickname;

  tarUserIdentifierType tarUid;
  tarLanguageTypes tarLanguage;
  tarUserDataType tarUserData;

 const char *tarShortOptions = "ChN";
 struct option tarLongOptions [4] =
 {
   {"Configure", 0, NULL, 'C'},
   {"help", 0, NULL, 'h'},
   {"Ncurses", 0, NULL, 'N'},
   {NULL, 0, NULL, 0}
 };

char *tarArgumentNames [ ] =
 {
   "email",
   "language",
   "nickname",
   "username",
   NULL
 };

 while ((tarShortOption =
   /* Utilizacao da funcao getopt_long */
           getopt_long (argc,
                        argv,
                        tarShortOptions,
                        tarLongOptions,
                        &tarLongOption)) != -1)
 {
    switch (tarShortOption)
    {
      case 'C':
        printf ("Configure\n");
        while (optind < argc)
        {
          tarArguments = argv [optind];
          tarArgumentIndex =
          /* Utilizacao da funcao getsubopt */
            getsubopt (&tarArguments, tarArgumentNames, &tarArgumentValue);
          switch (tarArgumentIndex)
          {
            case tarEmailArgument:
              strcpy (tarUserData.tarEmail, tarArgumentValue);
              tarOptionsCounter++ ;
            break;

            case tarEmailConfirmationArgument:
              strcpy (tarUserData.tarEmailConfirmation, tarArgumentValue);
              tarOptionsCounter++ ;
            break;

            case tarLanguageArgument:
              if ( strcmp( tarArgumentValue, "tarPortuguese" ) )
                tarLanguage = tarPortuguese ;
              else
                tarLanguage = tarEnglish ;
            break;

            case tarFullNameArgument:
              tarOptionsCounter++ ;
              strcpy ( tarUserData.tarFullName, tarArgumentValue ) ;
            break;

            case tarFullNameConfirmationArgument:
              tarOptionsCounter++ ;
              strcpy ( tarUserData.tarFullNameConfirmation, tarArgumentValue ) ;
            break;

            default:
              printf ("Invalid Option\n");
          }

          if ( tarOptionsCounter != TAR_MANDATORY_OPTIONS )
            exit ( tarMissingOptions ) ;
            /* Adicionar Erro na tabela de Erros */

          optind++ ;
          tarUid = getuid() ;

          if ( tarUid != TAR_ADMINISTRATOR_USER_IDENTIFIER )
            exit ( tarPermissionDenied ) ;
            /* Adicionar Erro na tabela de Erros */

          printf ( "%s" , tarGetCliUserInterfaceMessage ( tarGetPassword, tarLanguage )) ;

          strcpy ( tarUserData.tarPassword, getpass("") ) ;
          printf ( "%s" , tarGetCliUserInterfaceMessage( tarConfirmPassword , tarLanguage )) ;

          strcpy (tarUserData.tarPasswordConfirmation , gerpass("")) ;

          tarUserData.tarUid = 0 ;
          tarUserData.tarNickname[1] = '\0' ;
          tarUserData.tarProfile = tarUser ;
          tarUserData.tarNextUser = NULL ;
          tarUserData.tarPreviousUser = NULL ;

        }
      break ;

      case 'h':
        while (optind < argc)
        {
          tarArguments = argv[optind] ;
          tarArgumentIndex = getsubopt (&tarArguments, tarArgumentNames, &tarArgumentValue);
          switch (tarArgumentIndex)
          {
            case tarLanguageArgument:
              if ( strcmp( tarArgumentValue , "portuguese" ) )
                tarLanguage = tarPortuguese ;
              else
                tarLanguage = tarEnglish ;
            break ;

            default:
              tarLanguage = tarEnglish ;
          }
        optind++ ;
      }
    break ;

    case 'N':
      while ( optind < argc )
      {
        tarArguments = argv [optind] ;
        tarArgumentIndex = getsubopt ( &tarArguments, tarArgumentNames, &tarArgumentValue ) ;

        switch ( tarArgumentIndex )
        {
          case tarLanguageArgument:
            if ( strcmp( tarArgumentValue , "portuguese" )) ;
              tarLanguage =  tarPortuguese ;
            else
               tarLanguage = tarEnglish ;
          break ;

          case tarNicknameArgument:
            tarNickname = tarArgumentValue ;
            printf ("Nickname: \"%s\"\n" , tarNickname ) ;
          break;

         default:
           tarLanguage = tarEnglish ;
           tarNickname = tarArgumentValue ;
        }
        optind++;
      }
    break;

    default:
      printf ("Invalid Option\n");
  }
}

return tarOk ;
}

/* $RCSfile$ */
