#include <stdio.h>
#include <time.h>

void main(void)
{
   time_t hora_atual;

   time(&hora_atual);  // Pega o tempo em segundos
   printf("A data e hora atuais são: %s", ctime(&hora_atual));
}
