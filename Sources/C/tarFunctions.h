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

#ifndef 	TAR_FUNCTIONS_H
#define 	TAR_FUNCTIONS_H 		"@(#)tarFunctions.h $Revision$"

/* This file should declare all the auxiliary functions of the TAR System */

/* 1 - Prototypes */

/* tarErrorType tarFunction ( type tarVariable1 , type tarVariable2 ) ; */

/*
 * tarErrorType TarGetLanguageIndex ( char *tarLanguageString , int tarLanguageIndex ) ;
 *
 * Arguments:
 * char *tarLanguageString - Language Desired (I)
 * int tarLanguageIndex- Language Index Returned (O)
 *
 * Returned code:
 * tarOK - the function have been executed successfully
 * tarInvalidLanguage - The language you are trying to get the Index is not valid
 *
 * Description:
 * This function gets a string with the Language selection in english and returns an integer value corresponding to this language on the type tarLanguageType
 */

int TarGetLanguageIndex (char * ) ;

char * TarGetAbsoluteFileName ( char * , char * ) ;

tarErrorType
TarCheckStringField (char * , char * , size_t , size_t ) ;

tarErrorType
TarCheckNickname (char * , char * , size_t , size_t ) ;

tarErrorType
TarCheckEmail (char * , char * , size_t , size_t ) ;

/*
 * tarErrorType
 * TarCreateRandomString (char * , size_t , char * ) ;
 *
 * Arguments:
 * char * - Valid Characters Vector (I)
 * size_t - Desired Lenght of the Random String to be Created (I)
 * char * - Random String Generated (O)
 *
 * Returned code:
 * tarOK - The fucntion has generated the Random String successfully
 * Error....
 *
 * Description:
 * This function generates a Random String based on the Valid Characters Vector received and the Desired Length of the String.
 */

tarErrorType
TarCreateRandomString (char * , size_t , char * ) ;

/*
 * tarErrorType
 * TarCreateNickname (char * , char * , char * ) ;
 *
 * Arguments:
 * char * - Full User Name (I)
 * char * - Nickname Possibility 1 (O)
 * char * - Nickname Possibility 2 (O)
 *
 * Returned code:
 * tarOK - The fucntion has successfully generated the 2 Available Nicknames
 * Error....
 *
 * Description:
 * This function generates 2 options for a User Nickname based on the User Full Name
 */

tarErrorType
TarCreateNickname (char * , char * , char * ) ;

/*
 * tarErrorType
 * TarGetCryptAlgorithm (char *tarEncryptedPassword, tarCryptAlgorithms *tarUsedAlgorithm)
 *
 * Arguments:
 * char *tarLanguageString
 * int tarLanguageIndex-
 *
 * Returned code:
 *
 *
 *
 * Description:
 *
 */

tarErrorType
TarGetCryptAlgorithm (char * , tarCryptAlgorithms * );

/*
 * tarErrorType
 * TarEncodePasswordWithSpecificAlgorithm (char *tarPlainPassword , tarCryptAlgorithms *tarCryptAlgorithm , char *tarEncryptedPassword)
 *
 * Arguments:
 * char *tarPlainPassword - Plain password, not yet encrypted (I)
 * tarCryptAlgorithms tarCryptAlgorithm - Chosen Crypt Algorithm to Crypt (I)
 * char *tarEncryptedPassword - Password Encrypted with the Plain Pasword and de chosen Crypt Algorithm (O)
 *
 * Returned code:
 * TarOk - The Plain Password has been encrypted successfully
 *
 *
 * Description:
 * The function encrypts a Plain Pasword with a chosen Crypt Algorithm
 */

tarErrorType
TarEncodePasswordWithSpecificAlgorithm (char * , tarCryptAlgorithms * );

/*
 * tarErrorType
 * TarEncodePasswordWithSpecificSalt (char *tarPlainPassword , char *tarCompleteSalt , char *tarEncryptedPassword )
 *
 * Arguments:
 * char *tarPlainPassword - Plain password, not yet encrypted (I)
 * char *tarCompleteSalt - Specific Salt for Encryption - with Algorithm ID included (I)
 * char *tarEncryptedPassword - Password Encrypted with the Plain Pasword and the chosen Salt (O)
 *
 * Returned code:
 * tarOk - The Plain Password has been encrypted successfully
 * tarCryptPasswordError - There has been an error while crypting the algorithm
 *
 * Description:
 * The function encrypts a Plain Pasword with a chosen Salt
 */

tarErrorType
TarEncodePasswordWithSpecificSalt (char *, char *, char *);

/*
 * tarErrorType
 * TarCheckPassword (char *tarPlainPassword , char *tarEncryptedPassword)
 *
 * Arguments:
 * char *tarPlainPassword - Plain password (I)
 * char *tarEncryptedPassword - Encrypted Password (I)
 *
 * Returned code:
 * tarOk - The Plain Password has been encrypted successfully
 * tarInvalidPassword - The PlainPassword does not match with the corresponding PlainPassword in the Encrypted Password
 *
 * Description:
 * The function verifies if the PlainPassword corresponds to the Encrypted Password
 */

tarErrorType
TarCheckPassword (char *, char *) ;

/*
 * tarErrorType
 * TarAuthenticateUser ( tarUserDataType * ) ;
 *
 * Arguments:
 * char *tarUserDataType -
 *
 *
 * Returned code:
 * tarOk - The User is Valid
 *
 *
 * Description:
 * This function will receibe a Nickname and a Password, if they are valid it will return the: ID, Full Name, Email, User Profile
 */

tarErrorType
TarAuthenticateUser ( tarUserDataType * ) ;

#endif /* #ifndef TAR_FUNCTIONS_H */

/* $RCSfile$ */
