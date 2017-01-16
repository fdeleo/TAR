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


#ifndef 	TAR_USER_INTERFACE_H
#define 	TAR_USER_INTERFACE_H 		"@(#)tarUserInterface.h $Revision$"

typedef enum  {
  UserInterfaceMessage1 ,
  UserInterfaceMessage2 ,
  tarNumberUserInterfaceMessages
 } tarUserInterfaceMessageNumberType ;

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

char *TarGetCliUserInterfaceMessage ( tarUserInterfaceMessageNumberType , tarLanguageType ) ;

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

char *TarGetNcursesUserInterfaceMessage ( tarUserInterfaceMessageNumberType , tarLanguageType ) ;

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

char *TarGetWebUserInterfaceMessage ( tarUserInterfaceMessageNumberType , tarLanguageType ) ;


#endif /* #ifndef TAR_USER_INTERFACE_H */

/* $RCSfile$ */
