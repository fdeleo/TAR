
#define _XOPEN_SOURCE     500
#include    <unistd.h>
#include    <stdio.h>
#include    <string.h>


int main ()
{
   const char str[] = "idsaltencrypted";
   const char ch = '$';
   char *ret;

   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
