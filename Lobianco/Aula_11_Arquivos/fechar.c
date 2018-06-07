#include <stdio.h>

int main(void)
{
   FILE *pa = fopen("teste.c","r");

   if (fclose(pa)==EOF)
      printf("Erro ao fechar o arquivo/n");
}

