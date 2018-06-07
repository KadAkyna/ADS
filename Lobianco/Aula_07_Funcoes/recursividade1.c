#include <stdio.h>

int fatorial(int valor)
{
   if (valor == 1)
     return(1);
   else
     return(valor * fatorial(valor-1));
}
int main(void)
{
   int i;

   for (i = 1; i <= 5; i++)
     printf("O fatorial de %2d é %d\n", i, fatorial(i));
}
