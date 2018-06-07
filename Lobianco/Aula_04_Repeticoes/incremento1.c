#include <stdio.h>

int main(void)
{
   int contador;

   printf("\nIniciando o primeiro laço\n");
   for (contador = -100; contador <= 100; contador += 5)
    printf("%d ", contador);

   printf("\nIniciando o segundo laço\n");
   for (contador = 100; contador >= -100; contador -= 25)
    printf("%d ", contador);
}
