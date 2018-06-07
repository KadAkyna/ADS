#include <stdio.h>

int cubo(int valor)
{
   return(valor * valor * valor);
}
int main(void)
{
   printf("O cubo de 5 é %d\n", cubo(5));
}
