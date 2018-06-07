#include <stdio.h>

int i_cubo(int);
float f_cubo(float);

int main(void)
{
   printf("O cubo de 3 é %d\n", i_cubo(3));
   printf("O cubo de 3.7 é %f\n", f_cubo(3.7));
}
int i_cubo(int valor)
{
   return(valor * valor * valor);
}
float f_cubo(float valor)
{
   return(valor * valor * valor);
}
