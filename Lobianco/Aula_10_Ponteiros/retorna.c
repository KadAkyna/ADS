#include <stdio.h>
#include <ctype.h>

char *string_maiusc(char *string)
{
   char *ender_inicial, *temp;
   ender_inicial = temp = string;

   while (*string) 
       *(temp++) = toupper(*string++);
   return(ender_inicial);
}
int main(void)
{
   char titulo[] = "Programação C/C++";
   char *string;

   string = string_maiusc(titulo);
   printf("%s\n", string);
   printf("%s\n", titulo);
}


