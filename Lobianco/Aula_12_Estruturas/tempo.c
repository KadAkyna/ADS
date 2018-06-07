#include <stdio.h>
#include <time.h>

void main(void){
   time_t hora_atual;
   time_t hora_inicio;

   printf("Prestes a fazer uma pausa de 5 segundos\n");
   time(&hora_inicio); // Pega o tempo inicial em segundos
   do {
      time(&hora_atual); }
   while ((hora_atual - hora_inicio) < 5);
   printf("Acabado\n");
}