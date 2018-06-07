#include <stdio.h>

int main(void)
{
  char frase[]="teste";
  char *p;
  int i;

  printf("%s\n",frase);			/* teste */
  p=frase;					/* ponteiro=&frase[0]; */

  printf("Usando o índice\n");		/* Usando o índice */
  for(i=0; p[i]!='\0'; i++)
    printf("%c\n",p[i]);				/* t e s t e */

  printf("Incrementando o ponteiro\n");	/* Incrementando o ponteiro */
  while(*p!='\0')
  {
    printf("%c\n", *p);				/* t e s t e */
    p++;
  }
}

