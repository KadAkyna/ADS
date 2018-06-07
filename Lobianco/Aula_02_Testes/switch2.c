#include <stdio.h>

void main(void)
{
   char letra;

   int conta_vogal = 0;

   for (letra = 'A'; letra <= 'Z'; letra++)
      switch (letra) 
      {
         case 'A':
         case 'E':
         case 'I':
         case 'O':
         case 'U': conta_vogal++;
      }; 

   printf("O número de vogais é %d\n", conta_vogal);
}
