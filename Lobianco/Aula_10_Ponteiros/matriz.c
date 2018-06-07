#include <stdio.h>

int main(void)
{
   char *dias[7] = {"Domingo", "Segunda", "Terça", 
                            "Quarta", "Quinta", "Sexta", "Sábado"};
   int i;

   for (i = 0; i < 7; i++)
     printf("dias[%d] contém %s\n", i, dias[i]);
}



