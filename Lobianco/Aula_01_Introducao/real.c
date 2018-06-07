#include <stdio.h>

void main(void)
{
   float preco = 525.75;
   float imposto = 0.06;

   printf("O custo do item é %f\n", preco);
   printf("E em linguagem de engenharia é %e\n", preco);
   printf("O imposto sobre a venda do item é %f\n", preco * imposto);
}
