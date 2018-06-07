#include <stdio.h>

void main(void)
{
   char string[256];
   int i;

   for (i = 0; i < 26; i++)
      string[i] = 'A' + i;
   string[10] = NULL;                            // finalizando a string
   printf ("A string contém %s\n", string);
}
