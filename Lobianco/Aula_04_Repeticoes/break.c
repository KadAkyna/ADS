#include <stdio.h>

int main(void)
{
   int contador;

   for (contador = 1; contador <= 100; contador++)
   {
      if (contador == 50)
         break;                       // sai do for
      printf("%d ", contador);
   }
}
