#include <stdio.h>
#include <string.h>

void main(void)
{
   char nome[64] = "Dálmata Macho";
   strcat(nome, " Happy");
   printf("O nome completo do Happy é %s\n", nome);
}
