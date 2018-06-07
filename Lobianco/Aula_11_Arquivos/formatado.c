#include <stdio.h>

int main(void)
{
   FILE *pa;
   int paginas = 800;
   float preco = 79.95;

   if (pa = fopen("FPRINTF.DAT", "w"))
   {
      fprintf(pa, "Programando C/C++\n");
      fprintf(pa, "Páginas: %d\n", paginas);
      fprintf(pa, "Preço: $%5.2f\n", preco);
      fclose(pa);
   }
   else 
      printf("Erro ao abrir FPRINTF.DAT\n");
}

