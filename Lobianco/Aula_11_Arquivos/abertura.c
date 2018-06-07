#include <stdio.h>

int main(void)
{
   FILE *pa;   // ponteiro para uma estrutura do tipo FILE

   if((pa = fopen("NOMEARQ.EXT","r"))!= NULL)
      printf("Arquivo NOMEARQ.EXT aberto com sucesso\n");
   else
      printf("Erro ao abrir NOMEARQ.EXT\n");
}
