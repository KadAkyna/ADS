#include <stdio.h>

int main(void)
{
   FILE *saida;

   if ((saida = fopen("teste.html", "w"))==NULL)
     printf("Erro ao abrir arquivo\n");
   else
   {   
      fprintf(saida,"<html><head><title>Minha Página\n");
      fprintf(saida,"</title></head><body>\n");
      fprintf(saida,"<h1>AGORA ESTOU NA WEB\n");
      fprintf(saida,"<hr>FACIL facil FACIL facil FACIL\n");
      fprintf(saida,"<p><img src=\"imagem.png\"");
      fprintf(saida,"</body></html>");
      fclose(saida);
   }
}

