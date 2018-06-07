#include <stdio.h>
#include <math.h>

int main(void)
{ 
   double valor;

   for (valor = 0.0; valor < 10.0; valor += 0.1)
     printf("Valor %5.2f  Raiz quadrada = %f\n", valor, sqrt(valor));
}
