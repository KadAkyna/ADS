#include <stdio.h>

int main(void)
{
   int contador = 1;  // Inicializa a variável de controle

   while (contador <= 100)  // Testa a variável de controle
   {
       printf("%d ", contador);  // Executa os comandos
       contador++;    // Modifica a variável de controle
   }
}
