#include <stdio.h>

int a=6, b=7, c=8;              // variáveis globais (durante programa)

void valores_locais(void)
{
   int a=1, b=2, c=3;           // variáveis locais (durante função)

   printf("a contém %d, b contém %d, c contém %d\n", a,b,c);
}
int main(void)
{
   valores_locais();
   printf("a contém %d, b contém %d, c contém %d\n", a,b,c);
}
