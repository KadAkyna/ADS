#include <stdio.h>
#include <string.h>

void main(void)
{
   printf("Procurando Abc em AbcDef %s\n",
    (strstr("AbcDef", "Abc")) ? "Encontrado" : "Não encontrado");
   printf("Procurando Abc em abcDef %s\n",
    (strstr("abcDef", "Abc")) ? "Encontrado" : "Não encontrado");
   printf("Procurando Abc em AbcAbc %s\n",
    (strstr("AbcAbc", "Abc")) ? "Encontrado" : "Não encontrado");
}

