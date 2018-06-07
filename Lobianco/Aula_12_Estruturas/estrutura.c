#include <stdio.h>

struct Forma
{
   int tipo;
   int cor;
   float raio;
   float area;
   float perimetro;
};
void exibe_estru(struct Forma forma)
{
   printf("forma.tipo %d\n", forma.tipo);
   printf("forma.cor %d\n", forma.cor);
   printf("forma.raio %f\n forma.area %f\n forma.perimetro %f\n",
       forma.raio, forma.area, forma.perimetro);
 }
void main(void)
{
   struct Forma circulo;

   circulo.tipo = 0;
   circulo.cor = 1;
   circulo.raio = 5.0;
   circulo.area = 22.0/7.0*circulo.raio*circulo.raio; 
   circulo.perimetro = 2.0 * 22.0 / 7.0 * circulo.raio;
   exibe_estru(circulo);
}
