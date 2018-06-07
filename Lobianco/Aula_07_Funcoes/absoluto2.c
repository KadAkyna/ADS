#include <stdio.h>
#include <math.h>

int main(void)
 {
   float valor;

   for (valor = -1.0; valor <= 1.0; valor += 0.1)
     printf("Valor %f fabs %f\n", valor, fabs(valor));
}
