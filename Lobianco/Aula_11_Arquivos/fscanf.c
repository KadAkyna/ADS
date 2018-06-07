#include <stdio.h>

void main(void)
{
   FILE *pa;
   int idade;
   float salario;
   char nome[64];

   if ((pa = fopen("DADOS.DAT", "w")) == NULL)
     printf("Erro ao abrir DADOS.DAT para saída\n");
   else
   {
     fprintf(pa, "33 3500.0 Programa");
     fclose(pa);
     if ((pa = fopen("DADOS.DAT", "r")) == NULL)
        printf("Erro ao abrir DADOS.DAT para entrada\n");
     else
     {
        fscanf(pa, "%d %f %s", &idade, &salario, nome);
        printf("Idade %d Salário %f Nome %s\n", idade, salario, nome);
        fclose(pa);
       
     }     
   }
}
