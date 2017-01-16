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

/* This file will generate the tarMain.cgi which will generate the HTML code for the TAR System Home Page */
#include      <stdio.h>
#include      <stdlib.h>

#include      "tarTypes.h"
#include      "tarErrors.h"
#include      "tarConst.h"
#include      "Libraries/mlcgi.h"
#include      "tarUserInterface.h"
/*
 * tarErrorType *TarCgiMain ( tarErrorType var1 , tarLanguageType var2 ) ;
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

/* tarErrorType
TarCgiMain ( tarLanguageType tarLanguageMain ) */

int
main ( int argc , char** argv )
{
  /* Variables Definitions */
  environmentType tarEnvironment ;
  char tarNickname [TAR_NICKNAME_MAX_LENGTH + 1] ;
  char tarPassword [TAR_PASSWORD_MAX_LENGTH + 1] ;
  unsigned tarReturnCode ;
  char tarLanguageString [TAR_LANGUAGE_MAX_LENGTH + 1] ;

/* Check if the Librarie "mlcgi.h" has been initialized successfully */
  if (mlCgiInitialize (&tarEnvironment))
    exit (tarErrorCgiInitialize) ;
/* Check the Environment Types */
  if (tarEnvironment == commandLine)
  {
    TarGetCliErrorMessage ( tarInvalidExecutionEnvironment , tarEnglish ) ;
    exit (tarInvalidExecutionEnvironment);
  }

  /* Begin generating the requested HTML Page
    1) HTTP Header
   */
  mlCgiBeginHttpHeader ("text/html") ;
  mlCgiEndHttpHeader () ;
  /* Defining the Language Selection of the Page */
  if ( (tarReturnCode = mlCgiGetFormStringNoNewLines ( "language" , tarLanguageString , TAR_LANGUAGE_MAX_LENGTH)) != tarOk )
    tarLanguage = tarEnglish ;

/* In case of Selection of Portuguese Language */
  else if ( strcmp ( "tarPortuguese" , tarLanguageString ))
    tarLanguage = tarPortuguese ;

  else  /* Default Language */
    tarLanguage = tarEnglish ;

    /* Begin generating the requested HTML Page
      2) HTML Header
     */
  printf ("Content-Type:text/html;charset=utf-8");
  /* mlCgiGetFormStringNoNewLines ("Login" , tarNickname , TAR_NICKNAME_MAX_LENGTH ) ;
  */
  printf ("<!DOCTYPE html>\n<html>\n<head>\n") ;
  /*
    printf( "<html>\n" ) ;
    printf( "<!--\n" ) ;
    printf( "* Universidade Federal do Rio de Janeiro\n") ;
    printf( "* Escola Politecnica\n " ) ;
    printf( "* Departamento de Eletronica e de Computacao\n" ) ;
    printf( "* Prof. Marcelo Luiz Drumond Lanza\n" ) ;
    printf( "* EEL 270 - Computacao II - Turma 2015/2\n" ) ;
    printf( "* Autor: Felipe Campos De Leo\n" ) ;
    printf( "* $Author$\n" ) ;
    printf( "* $Date$\n" ) ;
    printf( "* $Log$\n" ) ;
    printf( "-->\n" ) ;
    printf( "<head>\n" ) ;
  */

  /* Acertar os textos do HTML como variaveis a serem buscadas de acordo com o idioma e deixar os textos todos no tarConfig.h */

  printf ("<TITLE>Take a Ride Home Page</TITLE>\n</HEAD>\n");
  printf ("<BODY>\n")
  /* Begin generating the requested HTML Page
    3) HTML Body
   */

  printf ("<H3>Take a Ride Home Page</H3>\n");

  /* Used after testing compilation OK */
  /* Pegar caracteres especiais para string pra poder escrever o codigo todo do HTML dessa linha */

  /* Beginning of the Home Page Body */
  printf( "TESTE\n" ) ;
  printf( "\n" ) ;
  printf( "\n" ) ;
  printf( "\n" ) ;
  printf( "\n" ) ;


  /* End of HTML File */
  printf( "</body>\n" ) ;
  printf( "<!--  $RCSfile$ -->\n" ) ;
  printf( "</html>\n" ) ;

  /* Program has been executed successfully */
  mlCgiFreeResources ();
  return tarOK ;
}

/* $RCSfile$ */
