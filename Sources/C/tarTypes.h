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

#ifndef 	TAR_TYPES_H
#define 	TAR_TYPES_H 		"@(#)tarTypes.h $Revision$"

#include  <stdlib.h>

#include "tarConst.h"

/* This file should define all the types presents on the system with exception of the ones related with Errors or UserInterface */

/* typedef type variable ; */
typedef enum  { tarEnglish , tarPortuguese , tarNumberLanguages }
 tarLanguageType ;

typedef unsigned long long tarUserIdentifierType ;

typedef enum  { tarAdministrator, tarUser }
 tarProfileType ;

typedef enum { false , true } boolean;

typedef struct tarUserDataType {
  tarUserIdentifierType tarUserID ;
  char tarNickname[TAR_NICKNAME_MAX_LENGTH + 1] ;
  char tarPassword[TAR_PASSWORD_MAX_LENGTH + 1] ;
  char tarPasswordConfirmation[TAR_PASSWORD_MAX_LENGTH + 1] ;
  tarProfileType tarUserProfile ;
  char tarFullName[TAR_FULLNAME_MAX_LENGTH + 1] ;
  char tarFullNameConfirmation[TAR_FULLNAME_MAX_LENGTH + 1] ;
  char tarEmail[TAR_EMAIL_MAX_LENGTH + 1] ;
  char tarEmailConfirmation[TAR_EMAIL_MAX_LENGTH + 1] ;
  tarUserDataType *tarNextUser ;
  tarUserDataType *tarPreviousUser ;
} tarUserData ;

typedef enum { tarDes /* 0 */ , tarMd5 /* 1 */ , tarSha256 /* 2 */ , tarSha512 /* 3 */ }
tarCryptAlgorithms ;

#endif /* #ifndef TAR_TYPES_H */

/* $RCSfile$ */
