#include <stdio.h>

void main(int argc, char **argv)
{  // argc = numero de argumentos
   // argv[] = argumentos
   FILE *entrada, *saida;
   char string[256];

   if ((entrada = fopen(argv[1], "r")) == NULL)
      printf("Erro ao abrir %s\n", argv[1]);
   else 
      if ((saida=fopen(argv[2], "w")) == NULL)
      {
         printf("Erro ao abrir %s\n", argv[2]);
         fclose(entrada);	
      }
      else
      {
         while (fgets(string, sizeof(string), entrada))
            fputs(string, saida);
         fclose(entrada);
         fclose(saida);
	
      }
}
