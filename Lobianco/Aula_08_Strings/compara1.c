#include <stdio.h>
#include <string.h>

void main(void)
{
   printf("Comparando Abc com Abc %d\n", strcmp("Abc", "Abc"));
   printf("Comparando abc com Abc %d\n", strcmp("abc", "Abc"));
   printf("Comparando abcd com abc %d\n", strcmp("abcd", "abc"));
   printf("Comparando abcd com abce %d\n", strcmp("abcd", "abce"));
}

