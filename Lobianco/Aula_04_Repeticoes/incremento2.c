#include <stdio.h>

int main(void)
{
   char letra;
   float porcent;

   for (letra = 'A'; letra <= 'Z'; letra++)
     printf("%c", letra);
   printf("\n");
   for (letra = 'z'; letra >= 'a'; letra--)
     printf("%c", letra);
   printf("\n\n");

   for (porcent = 0.0; porcent < 1.0; porcent += 0.1)
     printf("%3.1f\n", porcent);
}
