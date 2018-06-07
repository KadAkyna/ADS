#include <stdio.h>

int main(void)
{
   FILE *entrada, *saida;
   int letra;

   if ((entrada = fopen("teste.c", "r"))==NULL)
     printf("Erro ao abrir teste.c\n");
   else
     if ((saida = fopen("teste.bak", "w"))==NULL)
       printf("Erro ao abrir teste.bak\n");
     else
     {       // Le e grava cada caractere no arquivo
       while ((letra = fgetc(entrada)) != EOF)
          fputc(letra, saida);
       fclose(entrada);     // Fecha o arquivo entrada 
       fclose(saida);         // Fecha o arquivo saida
     }
}

