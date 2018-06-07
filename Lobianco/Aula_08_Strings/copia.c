#include <stdio.h>
#include <string.h>

void main(void)
{
   char livro[128] = "Este texto será perdido com a cópia";
   strcpy(livro, "Programação C/C++");
   printf("Nome do livro: %s\n", livro);
}
