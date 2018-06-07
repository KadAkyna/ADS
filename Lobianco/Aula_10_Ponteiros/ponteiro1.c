#include <stdio.h>

int main(void)
{
  int variavel, *ponteiro;
  variavel = 10;

  ponteiro = &variavel;
  printf("\n%d %d", variavel, *ponteiro); /* 10 10 */
  *ponteiro = 50;
  printf("\n%d %d", variavel, *ponteiro); /* 50 50 */
}
