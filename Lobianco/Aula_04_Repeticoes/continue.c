#include <stdio.h>

int main(void)
{
   int contador;

   printf("\nValores pares\n");
   for (contador = 1; contador <= 100; contador++)
   {
       if (contador % 2)  // �mpar 
          continue;       // voltar� ao for sem executar pr�ximas linhas
       printf("%d ", contador);
   }
}
