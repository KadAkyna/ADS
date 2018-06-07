#include <stdio.h>

struct Forma 
{
  int tipo;
  int cor;
  float raio;
  float area;
  float perimetro;
};
void muda_estru(struct Forma *forma)
{
   (*forma).tipo = 0;
   (*forma).cor = 1;
   (*forma).raio = 5.0;
   (*forma).area = 22.0/7.0 * (*forma).raio * (*forma).raio; 
   (*forma).perimetro = 2.0*22.0/7.0 * (*forma).raio;
}

void main(void)
{
   struct Forma circulo;

   muda_estru(&circulo);
   printf("circulo.tipo %d\n", circulo.tipo);
   printf("circulo.cor %d\n", circulo.cor);
   printf("circulo.raio %f\n circulo.area %f\n circulo.perimetro %f\n",
      circulo.raio, circulo.area, circulo.perimetro);
}
