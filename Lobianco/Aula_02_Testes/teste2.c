#include <stdio.h>

void main(void)
{
   int idade = 10;
   int usuario_tem_cachorro = 0;   // 0  falso

   if (idade == 10)
   {
      printf("Os cães são animais importantes\n");
      if (! usuario_tem_cachorro) // valores diferente de zero são verdadeiros
         printf("Compre um dálmata\n");
   }
   printf("Happy é um dálmata\n");
}
