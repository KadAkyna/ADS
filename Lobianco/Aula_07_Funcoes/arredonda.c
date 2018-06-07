#include <stdio.h>
#include <math.h>

int main(void)
{
   printf("O valor %f arredondado para cima é %f\n", 1.9, ceil(1.9)); 
   printf("O valor %f arredondado para cima é %f\n", 2.1, ceil(2.1));
   printf("O valor %f arredondado para baixo é %f\n", 1.9, floor(1.9)); 
   printf("O valor %f arredondado para baixo é %f\n", 2.1, floor(2.1));
}
