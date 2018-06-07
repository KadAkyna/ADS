#include <stdio.h>

int main(void)
{
   int valores[5] = {1, 2, 3, 4, 5};
   int contador;
   int *iptr;

   iptr = valores;
   for (contador = 0; contador < 5; contador++)
      printf("%d\n", *iptr++);
}

