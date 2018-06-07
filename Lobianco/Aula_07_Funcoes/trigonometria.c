#include <stdio.h>
#include <math.h>

int main(void)
{
  double pi = 3.14159265;
  double radianos;

  for (radianos=0.0; radianos<3.1; radianos+=0.1)
    printf("O seno de %f é %f\n",radianos,sin(radianos));

  printf("O co-seno de pi/2 é %6.4f\n",cos(pi/2.0));
  printf("A tangente de pi/4 é %f\n", tan(pi/4.0));
}
