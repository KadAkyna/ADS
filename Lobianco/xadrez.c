#include <stdio.h>
#include <stdlib.h>

void Inverte(int v[], int cont_1, int cont_2)
{
  int tp;
  tp = v[cont_1];
  v[cont_1] = v[cont_2];
  v[cont_2] = tp;
}
int Solucao(int linhas[]){
  int i;
  int x,y;
  int xx,yy;

  for(i = 0; i < 8; i++)
    {
    x = i;
    y = linhas[i];

    xx = x;
    yy = y;
    while(1){
      xx += 1;
      yy -= 1;
      if(xx > 7 || yy < 0) break;

      if(yy == linhas[xx])
        return 0;
    }

    xx = x;
    yy = y;
    while(1){
      xx -= 1;
      yy -= 1;
      if(xx < 0 || yy < 0) break;

      if(yy == linhas[xx])
        return 0;
    }
  }
  return 1;
}

void ImprimeSolucao(int linhas[]){
  char tabuleiro[8][8];
  int cont_1,cont_2;
  int x,y;
  static int solucoes = 0;

  solucoes++;

  printf("******* SOLUCAO: %d ******\n",solucoes);

  for(cont_1 = 0; cont_1 < 8; cont_1++)
    for(cont_2 = 0; cont_2 < 8; cont_2++)
      tabuleiro[cont_1][cont_2] = '.';

  for(cont_1 = 0; cont_1 < 8; cont_1++)
    {
    x = cont_1;
    y = linhas[cont_1];
    tabuleiro[y][x] = 'R';
    }

  for(cont_1 = 0; cont_1 < 8; cont_1++){
    for(cont_2 = 0; cont_2 < 8; cont_2++)
    {
            printf("%c",tabuleiro[cont_1][cont_2]);
        }
    printf("\n");
    }
}
void Solucoes8Rainhas() {
  int linhas[8];
  int cont_1;
  for(cont_1 = 0; cont_1 < 8; cont_1++)
    linhas[cont_1] = cont_1;
  TestePermuta(linhas, 0);
}
void TestePermuta(int linhas[], int i) {
  int cont;

  if(i == 8) {
    if(Solucao(linhas))
      ImprimeSolucao(linhas);
  }
  else{
    for(cont = i; cont < 8; cont++) {
      Inverte(linhas, i, cont);
      TestePermuta(linhas, i + 1);
      Inverte(linhas, cont, i);
    }
  }
}

int main(){
  Solucoes8Rainhas();
  return 0;
}
