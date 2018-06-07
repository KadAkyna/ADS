#include <stdio.h>

void oi_pessoal(void)
{
   printf("Olá, pessoal!\n");
}
void ola_conta(int conta_mensagem)
{
   int contador;

   for (contador = 0; contador < conta_mensagem; contador++)
     oi_pessoal();
}
int main(void)
{
   printf("Exibe a mensagem duas vezes\n");
   ola_conta(2);
   printf("Exibe a mensagem cinco vezes\n");
   ola_conta(5);
}
