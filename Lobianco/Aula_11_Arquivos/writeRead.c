#include <stdio.h>
#include <string.h>

int main(void)
{
   int dia = 7, a;
   float salario = 257.54, b;
   char *nome = "Programa com fprintf", *c;
   FILE *saida;

  if ((saida = fopen("SAIDA.SAI", "w+")) == NULL)
     fprintf(stderr, "Erro ao abrir o arquivo SAIDA.SAI\n");
  else
  {
     fwrite(&dia, sizeof(int), 1, saida);
     fwrite(&salario, sizeof(float), 1, saida);
     fwrite(&nome, strlen(nome), 1, saida);
  }
  rewind(saida);    /*reposiciona no inicio do arquivo */

  fread(&a, sizeof(int), 1, saida);
  fread(&b, sizeof(float), 1, saida);
  fread(&c, strlen(nome), 1, saida);
  printf("Dia: %d\nSalario: %f\nNome: %s\n", a, b, c);
  fclose(saida);
}


