#include <stdio.h>
#include <math.h>

int main(void)
{
   double valor;

   for (valor = 0.0; valor <= 1.0; valor += 0.1)
     printf("exp(%f) é %f\n", valor, exp(valor));
}
