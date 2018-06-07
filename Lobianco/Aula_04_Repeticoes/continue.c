#include <stdio.h>

int main(void)
{
   int contador;

   printf("\nValores pares\n");
   for (contador = 1; contador <= 100; contador++)
   {
       if (contador % 2)  // Ímpar 
          continue;       // voltará ao for sem executar próximas linhas
       printf("%d ", contador);
   }
}
