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
#include	<stdio.h>

#include	"tarUserInterface.h"
#include	"tarTypes.h"
#include	"tarErrors.h"

/* Does it work to use the variable "tarNumberUserInterfaceMessages" in that way ? */
const char *tarCliUserInterfaceMessages [tarNumberUserInterfaceMessages][tarNumberLanguages] {
  /* Should use '  ' or " " for string components in an array ? */
  {  User Interface 0 English , User Interface 0 Portugues  } ,
  {  User Interface 1 English , User Interface 1 Portugues } ,
  {  User Interface 2 English , User Interface 2 Portugues } ,
} ;

const char *tarNcursesUserInterfaceMessages [tarNumberUserInterfaceMessages][tarNumberLanguages] {
  /* Should use '  ' or " " for string components in an array ? */
  {  User Interface 0 English , User Interface 0 Portugues  } ,
  {  User Interface 1 English , User Interface 1 Portugues } ,
  {  User Interface 2 English , User Interface 2 Portugues } ,
} ;

const char *tarWebUserInterfaceMessages [tarNumberUserInterfaceMessages][tarNumberLanguages] {
  /* Should use '  ' or " " for string components in an array ? */
  {  User Interface 0 English , User Interface 0 Portugues  } ,
  {  User Interface 1 English , User Interface 1 Portugues } ,
  {  User Interface 2 English , User Interface 2 Portugues } ,
  } ;

/*
 * char *TarGetCliUserInterfaceMessage ( tarUserInterfaceMessageNumberType, tarLanguageType);
 *
 * Arguments:
 * tarUserInterfaceMessageNumberType - Function that have gotten an error (I)
 * tarLanguageType - Language in which the Program is running (I)
 *
 * Returned code:
 *
 * Description:
 * This function gets an error message in the CLI according to the language the user is using
 */

char *TarGetCliUserInterfaceMessage ( tarUserInterfaceMessageNumberType tarCliUserInterfaceMessage , tarLanguageType tarCliLanguage )
{
/* First I have to get the Index number of the 2 components of the Messages Index - tarUserInterfaceMessageNumberType and tarLanguageType
Then I have to return the message relative to them */
int tarCliLanguageIndex = 0 ;
int tarCliUserInterfaceMessageIndex = 0 ;

tarCliLanguageIndex = TarGetLanguageIndex (tarCliLanguage) ;
/* Funcao ainda nao implementada !!
tarCliUserInterfaceMessageIndex = TarGetCliUserInterfaceMessageIndex (tarCliUserInterfaceMessage) ;
*/
return (tarCliUserInterfaceMessages[tarCliUserInterfaceMessage][tarCliLanguageIndex]) ;
}


/*
 * char *TarGetNcursesUserInterfaceMessage ( tarUserInterfaceMessageNumberType, tarLanguageType);
 *
 * Arguments:
 * tarUserInterfaceMessageNumberType - Function that have gotten an error (I)
 * tarLanguageType - Language in which the Program is running (I)
 *
 * Returned code:
 *
 * Description:
 * This function gets an error message in the Ncurses according to the language the user is using
 */

 char *TarGetNcursesUserInterfaceMessage ( tarUserInterfaceMessageNumberType tarNcursesUserInterfaceMessage , tarLanguageType tarNcursesLanguage )
 {
 /* First I have to get the Index number of the 2 components of the Messages Index - tarUserInterfaceMessageNumberType and tarLanguageType
 Then I have to return the message relative to them */
 int tarNcursesLanguageIndex = 0 ;
 int tarNcursesUserInterfaceMessageIndex = 0 ;

 tarNcursesLanguageIndex = TarGetLanguageIndex (tarNcursesLanguage) ;
 /* Funcao ainda nao implementada !!
 tarNcursesUserInterfaceMessageIndex = TarGetNcursesUserInterfaceMessageIndex (tarNcursesUserInterfaceMessage) ;
 */
 return (tarNcursesUserInterfaceMessages[tarNcursesUserInterfaceMessage][tarNcursesLanguageIndex]) ;
 }

/*
 * char *TarGetWebUserInterfaceMessage ( tarUserInterfaceMessageNumberType, tarLanguageType);
 *
 * Arguments:
 * tarUserInterfaceMessageNumberType - Function that have gotten an error (I)
 * tarLanguageType - Language in which the Program is running (I)
 *
 * Returned code:
 *
 * Description:
 * This function gets an error message in the Web according to the language the user is using
 */

 char *TarGetWebUserInterfaceMessage ( tarUserInterfaceMessageNumberType tarWebUserInterfaceMessage , tarLanguageType tarWebLanguage )
 {
 /* First I have to get the Index number of the 2 components of the Messages Index - tarUserInterfaceMessageNumberType and tarLanguageType
 Then I have to return the message relative to them */
 int tarWebLanguageIndex = 0 ;
 int tarWebUserInterfaceMessageIndex = 0 ;

 tarWebLanguageIndex = TarGetLanguageIndex (tarWebLanguage) ;
 /* Funcao ainda nao implementada !!
 tarWebUserInterfaceMessageIndex = TarGetWebUserInterfaceMessageIndex (tarWebUserInterfaceMessage) ;
 */
 return (tarWebUserInterfaceMessages[tarWebUserInterfaceMessage][tarWebLanguageIndex]) ;
 }



/* $RCSfile$ */
