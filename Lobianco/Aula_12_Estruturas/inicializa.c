#include <stdio.h>

void main(void)
{
   struct Forma 
  {
      int tipo;
      int cor;
      float raio;
      float area;
      float perimetro;
   } circulo = {0, 1, 5.0, 78.37, 31.42};

   printf("circulo.tipo %d\n", circulo.tipo);
   printf("circulo.cor %d\n", circulo.cor);
   printf("circulo.raio %f\n circulo.area %f\n circulo.perimetro %f\n",
       circulo.raio, circulo.area, circulo.perimetro);
}
