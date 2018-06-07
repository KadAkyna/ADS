#include <stdio.h>

int fatorial(int valor)
{
   printf("Em fatorial com o valor %d\n", valor);

   if (valor == 1)
    {
      printf("Retornando o valor 1\n");
      return(1);
    }
   else
    {
      printf("Retornando %d * fatorial(%d)\n", 
         valor, valor-1);
      return(valor * fatorial(valor-1));
    }
}
int main(void)
{
   printf("O fatorial de 4 é %d\n", fatorial(4));
}
