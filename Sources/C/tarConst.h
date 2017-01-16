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

#ifndef 	TAR_CONST_H
#define 	TAR_CONST_H 		"@(#)tarConst.h $Revision$"

/* Define all the constants which are not defined either on tarConfig.h nor tarErrors.h */

#ifndef 	TAR_DEFAULT_LANGUAGE_INDEX
#define 	TAR_DEFAULT_LANGUAGE_INDEX 		0

#endif /* end #ifndef TAR_DEFAULT_LANGUAGE_INDEX */

#ifndef 	TAR_NICKNAME_MIN_LENGTH
#define 	TAR_NICKNAME_MIN_LENGTH 		8

#endif /* #ifndef TAR_NICKNAME_MIN_LENGTH */

#ifndef 	TAR_NICKNAME_MAX_LENGTH
#define 	TAR_NICKNAME_MAX_LENGTH 		64

#endif /* #ifndef TAR_NICKNAME_MAX_LENGTH */

#ifndef 	TAR_PASSWORD_MAX_LENGTH
#define 	TAR_PASSWORD_MAX_LENGTH 		127

#endif /* #ifndef TAR_PASSWORD_MAX_LENGTH */

#ifndef 	TAR_FULLNAME_MAX_LENGTH
#define 	TAR_FULLNAME_MAX_LENGTH 		256

#endif /* #ifndef TAR_FULLNAME_MAX_LENGTH */

#ifndef 	TAR_EMAIL_MIN_LENGTH
#define 	TAR_EMAIL_MIN_LENGTH 		8

#endif /* #ifndef TAR_EMAIL_MIN_LENGTH */

#ifndef 	TAR_EMAIL_MAX_LENGTH
#define 	TAR_EMAIL_MAX_LENGTH 		1024

#endif /* #ifndef TAR_EMAIL_MAX_LENGTH */

#ifndef 	TAR_LANGUAGE_MAX_LENGTH
#define 	TAR_LANGUAGE_MAX_LENGTH 		13

#endif /* #ifndef TAR_LANGUAGE_MAX_LENGTH */

#ifndef 	TAR_MANDATORY_OPTIONS
#define 	TAR_MANDATORY_OPTIONS       4

#endif /* #ifndef TAR_MANDATORY_OPTIONS */

#ifndef 	TAR_MAX_ABSOLUT_FILENAME_SIZE
#define 	TAR_MAX_ABSOLUT_FILENAME_SIZE    200

#endif /* #ifndef TAR_MAX_ABSOLUT_FILENAME_SIZE */

#ifndef 	TAR_VALID_CHARACTERS
#define 	TAR_VALID_CHARACTERS    "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

#endif /* #ifndef TAR_VALID_CHARACTERS */

#ifndef 	TAR_SALT_VALID_CHARACTERS
#define 	TAR_SALT_VALID_CHARACTERS    "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ./"

#endif /* #ifndef TAR_SALT_VALID_CHARACTERS */

// Conferir novos indicativos

#ifndef 	TAR_SALT_DES_LENGTH
#define 	TAR_SALT_DES_LENGTH    2

#endif /* #ifndef TAR_SALT_DES_LENGTH */

#ifndef 	TAR_SALT_MD5_LENGTH
#define 	TAR_SALT_MD5_LENGTH    8

#endif /* #ifndef TAR_SALT_MD5_LENGTH */

#ifndef 	TAR_SALT_SHA256_LENGTH
#define 	TAR_SALT_SHA256_LENGTH    16

#endif /* #ifndef TAR_SALT_SHA256_LENGTH */

#ifndef 	TAR_SALT_SHA512_LENGTH
#define 	TAR_SALT_SHA512_LENGTH    16

#endif /* #ifndef TAR_SALT_SHA512_LENGTH */

#ifndef 	TAR_SALT_DES
#define 	TAR_SALT_DES    NULL

#endif /* #ifndef TAR_SALT_DES */

#ifndef 	TAR_SALT_MD5
#define 	TAR_SALT_MD5    "$1$"

#endif /* #ifndef TAR_SALT_MD5_ */

#ifndef 	TAR_SALT_SHA256
#define 	TAR_SALT_SHA256    "$5$"

#endif /* #ifndef TAR_SALT_SHA256 */

#ifndef 	TAR_SALT_SHA512
#define 	TAR_SALT_SHA512    "$6$"

#endif /* #ifndef TAR_SALT_SHA512 */

#ifndef 	TAR_SALT_ID
#define 	TAR_SALT_ID    '$'

#endif /* #ifndef TAR_SALT_ID */

#ifndef 	TAR_USER_ID_MAX_LENGTH
#define 	TAR_USER_ID_MAX_LENGTH    5
/* Considering a 10000 users limitation */

#endif /* #ifndef TAR_USER_ID_MAX_LENGTH */

#ifndef 	TAR_USER_PROFILE_LENGTH
#define 	TAR_USER_PROFILE_LENGTH    1
/* 0 or 1 - Administrator or User */

#endif /* #ifndef TAR_USER_PROFILE_LENGTH */

#ifndef 	TAR_MAX_USERS_LINE_SIZE
#define 	TAR_MAX_USERS_LINE_SIZE   TAR_USER_ID_MAX_LENGTH + 1 + TAR_NICKNAME_MAX_LENGTH + 1 + TAR_PASSWORD_MAX_LENGTH + 1 + TAR_USER_PROFILE_LENGTH + 1 + TAR_FULLNAME_MAX_LENGTH + 1 + TAR_EMAIL_MAX_LENGTH

#endif /* #ifndef TAR_MAX_USERS_LINE_SIZE */

#ifndef 	TAR
#define 	TAR    00

#endif /* #ifndef TAR */

/* new consts
#ifndef 	TAR_NICKNAME_MAX_LENGTH
#define 	TAR_NICKNAME_MAX_LENGTH 		64

#endif /* #ifndef TAR_NICKNAME_MAX_LENGTH */


#endif /* #ifndef TAR_CONST_H */

/* $RCSfile$ */
