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

/* This file will generate the tarShowRequestRegistrationForm.cgi which will generate the HTML code for the Password Reset Form Page */
#include      <stdio.h>
#include      <stdlib.h>

#include      "tarTypes.h"
#include      "tarErrors.h"
#include      "Libraries/mlcgi.h"
#include      "tarUserInterface.h"
/*
 * tarErrorType TarCgiShowRequestPasswordResetForm ( tarErrorType var1 , tarLanguageType var2 ) ;
 *
 * Arguments:
 *
 *
 *
 * Returned code:
 *
 * Description:
 * This CGI generates the HTML code for the Home Page of the system
 */

tarErrorType TarCgiShowRequestPasswordResetForm ( tarLanguageType tarLanguageMain )
{
  /* Variables Definitions */
  environmentType tarEnvironment ;
  char tarNickname [TAR_NICKNAME_MAX_LENGTH + 1] ;
  char tarPassword [TAR_PASSWORD_MAX_LENGTH + 1] ;

/*  tarUserInterfaceMessageNumberType tarCgiMainUserInterface ; */

/* Check if the Librarie "mlcgi.h" has been initialized successfully */
  if (mlCgiInitialize (&tarEnvironment))
    return (tarErrorCgi) ;
/* Check the Environment Types */
  if (tarEnvironment == commandLine)
  {
    printf ("%s\n" , "Esse programa so pode ser executado via web" );
    exit (tarInvalidExecutionEnvironment);
  }

  mlCgiBeginHttpHeader ("text/html") ;
  mlCgiEndHttpHeader () ;

  /* Begin the Forms */
  /* Usar codigo de retorno ?? */
  mlCgiGetFormStringNoNewLines ("Login" , tarNickname , TAR_NICKNAME_MAX_LENGTH ) ;

  /* Program has been executed successfully */
  mlCgiFreeResources ();
  return (tarOK) ;
  /* return tarOK ; */
}

/* $RCSfile$ */
