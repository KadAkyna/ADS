#include <stdio.h>

void main(void)
{   
    union FuncionariosDatas
    {
        int dias_trabalhados;
        struct Data
       {
           int mes;
           int dia;
           int ano;
       } ultimo_dia;  // Data - requer 12 bytes
   } emp_info;

   union Numeros
   {
      int a;
      float b;
      long c;
      double d;               // double - requer 8 bytes
   } valor;

   printf("Tamanho de FuncionariosDatas %d bytes\n", sizeof(emp_info));
   printf("Tamanho dos Números %d bytes\n", sizeof(valor));
}
