#include <stdio.h>

#define SOMA(x, y) ((x) + (y))
#define MIN(x, y) (((x) < (y)) ? (x): (y))
#define MAX(x, y) (((x) > (y)) ? (x): (y))
#define QUADRADO(x) ((x) * (x))
#define CUBO(x) ((x) * (x) * (x))

int main(void)
{
   printf("Somando 3 + 5 = %d\n", SOMA(3, 5));
   printf("Somando 3.4 + 3.1 = %f\n", SOMA(3.4, 3.1));
   printf("Somando -100 + 1000 = %d\n", SOMA(-100, 1000));
   printf("O maior entre 10.0 e 25.0 é %f\n", MAX(10.0, 25.0));
   printf("O menor entre 3.4 e 3.1 é %f\n", MIN(3.4, 3.1));
   printf("O quadrado de 2 é %d\n", QUADRADO(2));
   printf("O cubo de 100 é %f\n", CUBO(100.0));
}
