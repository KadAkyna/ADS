#define TITULO "Programação C/C++ - UNIFIEO"
#define SECAO "Macros, constantes, strings e funções"
#define PI 3.1415926

#include <stdio.h>

int main(void)
{
   printf("O título desta apostila é %s\n", TITULO);
   printf("A seção é %s\n", SECAO);
   printf("A área de um círculo de raio 3 é %f\n", PI*3*3);
}
