#include <stdio.h>

int main(void)
{
   char string[256];
   int i;

   for (i = 0; i < 26; i++)
      string[i] = 'A' + i;
   string[i] = '\0'; // finalizando a string

   printf ("A string cont�m %s\n", string);
}
