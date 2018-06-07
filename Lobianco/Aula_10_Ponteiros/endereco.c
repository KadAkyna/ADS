#include <stdio.h>

int main(void)
{
   int conta = 1;
   float salario = 40000.0;
   long distancia = 1234567L;

   printf("O endereço de conta é %x\n", &conta);
   printf("O endereço de salario é %x\n", &salario);
   printf("O endereço de distancia é %x\n", &distancia);
}

