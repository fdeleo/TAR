#include <stdio.h>
#include <string.h>


int main()
{
   char tarBufferString[70] = "userid:nick.name:senha_codificada:0:Nome_Completo:email@poli.ufrj.br\0";
   char *tarUserNickname ;
   char *tarUserPassword ;
   char *tarAuxString;
   char *nickname ;
   char *password ;
   const char tarSeparador = ':' ;
   unsigned NicknameLength ;

   tarUserNickname = "nick.name\0" ;
   tarAuxString = strstr(tarBufferString, tarUserNickname);

   printf("The AuxString is: %s\n", tarAuxString );
   /* Acha o Nickname */
   printf("The length of Nickname is %d\n", strlen(tarUserNickname) );

  NicknameLength = strlen(tarUserNickname) ;
  tarUserPassword = "senha_codificada" ;
  /* Ate aqui esta OK */
  /* strcpy (tarBufferString , tarAuxString); */
  nickname[0] = '\0' ;
  strncpy( nickname, tarAuxString , NicknameLength ) ;
  printf("The substring is: %s\n", nickname);

   /* Acha a Senha correspondente */
  tarBufferString = strchr(tarAuxString, tarSeparador) ;
  printf("The BufferString is: %s\n", tarBufferString );

   return(0);
}
