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

#include	"tarErrors.h"
#include	"tarConst.h"
#include	"tarFunctions.h"

/* definicao das variaveis globais com as mensagens de erros nos respectivos idiomas */
/* É necessário colocar comentários para a definição das variáveis globais ? */
static char *tarCliErrorMessages [tarNumberErrors][tarNumberLanguages] = {
  /* Beginning of English Messages */
  {"The function has been executed successful" ,
  "Language Not Found" ,
  "Invalid Language" ,
  "Error initializing CGI" ,
  "Invalid Execution Environment" ,
  "Invalid Number of Ats(@)" ,
  "Invalid Full Name" ,
  "Invalid Number of Dots(.)" ,
  "Permission Denied" ,
  "Invalid Character" ,
  "There are Missing Options" ,
  "Invalid Length" ,
  "" ,
  "" ,
  ""
  } ,
  /* --- End of English Messages --- */
 /* Beginning of Portuguese Messages */
  {"A funcao foi executada com sucesso" ,
  "Lingua nao encontrada" ,
  "Lingua Invalida" ,
  "Erro ao inicializar a CGI" ,
  "Ambiente de Execucao Invalido" ,
  "Numero de Arrobas(@) Invalido" ,
  "Nome Completo Invalido" ,
  "Numero de Pontos(.) Invalido" ,
  "Permissao Negada" ,
  "Caracter Invalido" ,
  "Faltam Opcoes" ,
  "Comprimento Invalido" ,
  "" ,
  "" ,
  ""
} /* --- End of Portuguese Messages --- */
}

/* É necessário colocar comentários para a definição das variáveis globais ? */
static char *tarNcursesErrorMessages [tarNumberErrors][tarNumberLanguages] = {
  /* Beginning of English Messages */
  {"The function has been executed successful" ,
  "Language Not Found" ,
  "Invalid Language" ,
  "Error initializing CGI" ,
  "Invalid Execution Environment" ,
  "Invalid Number of Ats(@)" ,
  "Invalid Full Name" ,
  "Invalid Number of Dots(.)" ,
  "Permission Denied" ,
  "Invalid Character" ,
  "There are Missing Options" ,
  "Invalid Length" ,
  "" ,
  "" ,
  ""
  } ,
  /* --- End of English Messages --- */
 /* Beginning of Portuguese Messages */
  {"A funcao foi executada com sucesso" ,
  "Lingua nao encontrada" ,
  "Lingua Invalida" ,
  "Erro ao inicializar a CGI" ,
  "Ambiente de Execucao Invalido" ,
  "Numero de Arrobas(@) Invalido" ,
  "Nome Completo Invalido" ,
  "Numero de Pontos(.) Invalido" ,
  "Permissao Negada" ,
  "Caracter Invalido" ,
  "Faltam Opcoes" ,
  "Comprimento Invalido" ,
  "" ,
  "" ,
  ""
} /* --- End of Portuguese Messages --- */
}

/* É necessário colocar comentários para a definição das variáveis globais ? */
static char *tarWebErrorMessages [tarNumberErrors][tarNumberLanguages] = {
  /* Beginning of English Messages */
  {"The function has been executed successful" ,
  "Language Not Found" ,
  "Invalid Language" ,
  "Error initializing CGI" ,
  "Invalid Execution Environment" ,
  "Invalid Number of Ats(@)" ,
  "Invalid Full Name" ,
  "Invalid Number of Dots(.)" ,
  "Permission Denied" ,
  "Invalid Character" ,
  "There are Missing Options" ,
  "Invalid Length" ,
  "" ,
  "" ,
  ""
  } ,
  /* --- End of English Messages --- */
 /* Beginning of Portuguese Messages */
  {"A funcao foi executada com sucesso" ,
  "Lingua nao encontrada" ,
  "Lingua Invalida" ,
  "Erro ao inicializar a CGI" ,
  "Ambiente de Execucao Invalido" ,
  "Numero de Arrobas(@) Invalido" ,
  "Nome Completo Invalido" ,
  "Numero de Pontos(.) Invalido" ,
  "Permissao Negada" ,
  "Caracter Invalido" ,
  "Faltam Opcoes" ,
  "Comprimento Invalido" ,
  "" ,
  "" ,
  ""
} /* --- End of Portuguese Messages --- */
}

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

/* Variaveis indicando numeracao de erros e de Languages => Verificar o Index */
char *TarGetCliErrorMessage ( tarErrorType tarErrorNumber , tarLanguageType tarLanguageNumber )
{
  return ( tarCliErrorMessages[tarErrorNumber][tarLanguageNumber]) ;
}

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
 char *TarGetNcursesErrorMessage ( tarErrorType tarErrorNumber , tarLanguageType tarLanguageNumber )
 {
   return ( tarNcursesErrorMessages[tarErrorNumber][tarLanguageNumber]) ;
 }

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

 char *TarGetWebErrorMessage ( tarErrorType tarErrorNumber , tarLanguageType tarLanguageNumber )
 {
   return ( tarWebErrorMessages[tarErrorNumber][tarLanguageNumber]) ;
 }

/* $RCSfile$ */
