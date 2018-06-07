#include <stdio.h>

int main(void)
{
   int contador;

   printf("\nIniciando o primeiro laço\n");
   for (contador = 0; contador <= 5; contador++)
    printf("%d ", contador);

   printf("\nIniciando o segundo laço\n");
   for (contador = 10; contador >= 5; contador--)
    printf("%d ", contador);
}
