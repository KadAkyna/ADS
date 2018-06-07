#include <stdio.h>

int main(void)
{
   char *diasuteis[] = {"Segunda", "Terça", "Quarta", "Quinta", "Sexta", '\0' };
   char **dia_util;

   dia_util = diasuteis; 
   while (*dia_util)
     printf("%s\n", *dia_util++);
}



