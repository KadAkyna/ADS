#include <stdio.h>
#include <math.h>

int main(void)
{
   int potencia;

   for (potencia = -2; potencia <= 2; potencia++)
      printf("9 elevado a %d é %f\n", potencia, pow(9.0, potencia));

   printf("10 elevado a -1 é %f\n", pow10(-1));
   printf("10 elevado a 0 é %f\n", pow10(0));
   printf("10 elevado a 2 é %f\n", pow10(2));
}
