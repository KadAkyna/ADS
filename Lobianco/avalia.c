#include <stdio.h>

int main(){

 int A = 0, B = 10;
  do{         A+=2;
   B--;     }
  while(A < B);

  printf("%d", A + B);
  }
