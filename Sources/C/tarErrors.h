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

#ifndef 	TAR_ERROR_H
#define 	TAR_ERROR_H 		"@(#)tarErrors.h $Revision$"

/* Error Type enumerated from 0 to N-1 with the corresponding error variable */
typedef enum  {
          /* 0 */  tarOk ,
          /* 1 */  tarLanguageNotFound ,
          /* 2 */  tarInvalidLanguage ,
          /* 3 */  tarErrorCgiInitialize ,
          /* 4 */  tarInvalidExecutionEnvironment ,
          /* 5 */  tarInvalidAtNumber ,
          /* 6 */  tarInvalidFullName ,
          /* 7 */  tarInvalidDotNumber ,
          /* 8 */  tarPermissionDenied ,
          /* 9 */  tarInvalidChar ,
         /* 10 */  tarMissingOptions ,
         /* 11 */  tarInvalidLength ,
         /* 12 */  tarUnknownAlgorithm ,
         /* 13 */  tarCryptPasswordError ,
         /* 14 */  tarStringGenerationError,
         /* 15 */  tarInvalidPassword ,
         /* 16 */  tarOpeningFileError ,
         /* 17 */  tarReadingFileError ,
         /* 18 */  tarUserNotFound ,
         /* 19 */  tar ,
         /* XX */  tar ,
         /* XX */  tar ,
         /* XX */  tar ,

/* Last Element */ tarNumberErrors
              }
              tarErrorType ;

/*
 * char *TarGetCliErrorMessage ( tarErrorType var1 , tarLanguageType var2 ) ;
 *
 * Arguments:
 * tarErrorType - Function that have gotten an error (I)
 * tarLanguageType - Language in which the Program is running (I)
 *
 * Returned code:
 *
 * Description:
 * This function gets an error message in the CLI according to the language the user is using
 */

char *TarGetCliErrorMessage ( tarErrorType , tarLanguageType ) ;

/*
 * char *TarGetNcursesErrorMessage ( tarErrorType var1 , tarLanguageType var2 ) ;
 *
 * Arguments:
 * tarErrorType - Function that have gotten an error (I)
 * tarLanguageType - Language in which the Program is running (I)
 *
 * Returned code:
 *
 * Description:
 * This function gets an error message in Ncurses according to the language the user is using
 */

char *TarGetNcursesErrorMessage ( tarErrorType , tarLanguageType ) ;

/*
 * char *TarGetWebErrorMessage ( tarErrorType var1 , tarLanguageType var2 ) ;
 *
 * Arguments:
 * tarErrorType - Function that have gotten an error (I)
 * tarLanguageType - Language in which the Program is running (I)
 *
 * Returned code:
 *
 * Description:
 * This function gets an error message in the Web according to the language the user is using
 */

char *TarGetWebErrorMessage ( tarErrorType , tarLanguageType ) ;

#endif /* #ifndef TAR_ERROR_H */

/* $RCSfile$ */
