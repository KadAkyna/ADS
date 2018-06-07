#include <stdio.h>

void main(void)
{ 
   int valor = 10;

   printf("Usando sufixo %d\n", valor++); 
   printf("Valor após o incremento %d\n", valor);
   printf("Usando prefixo %d\n", ++valor);
   printf("Valor após o incremento %d\n", valor);

   printf("Usando postfixo %d\n", valor--);
   printf("Valor após o decremento %d\n", valor);
   printf("Usando prefixo %d\n", --valor); 
   printf("Valor após o decremento %d\n", valor);
}
