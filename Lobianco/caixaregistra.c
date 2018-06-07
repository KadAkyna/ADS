#include <stdio.h>
int main()
{
float valor_produto,total_compra,valor_pago,troco;
  int i;
  i = 1;
  total_compra = 0;
  valor_produto = -1;

  printf("Lojas Tabajara \n\n");


    while(valor_produto != 0)
    {
      printf("Produto: R$ ");
      scanf("%f", &valor_produto);
      total_compra = total_compra + valor_produto;
    }

  printf("Total: R$ %4.2f\n\n", total_compra);
    printf("Dinheiro: R$ ");
    scanf("%f", &valor_pago);
    troco = valor_pago - total_compra;
    printf("Troco: R$ %4.2f", troco);
    //printf("LOJAS TABAJARA \n \n Produto %d: %f", i, valor_produto);
    system ("PAUSE");
    system ("CLS");

}
