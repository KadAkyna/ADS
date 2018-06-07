#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
   int const Tamanho = 10;
   int Vetor[Tamanho] = {26, 60, 4, 8, 10, 12, 89, 68, 45, 37};
   int i;
   int troca;

   cout << "Dados na ordem original\n";

   for (i = 0; i < Tamanho; i++)
      cout << setw(4) << Vetor[i];

   for (int ponto = 0; ponto < (Tamanho - 1); ponto++)
      for (i = ponto + 1; i < Tamanho; i++)

         if (Vetor [i] < Vetor[ponto]) // realize a troca
         {
            troca = Vetor [i];
            Vetor[i] = Vetor [ponto];
            Vetor[ponto] = troca;
         }

   cout << "\nDados na ordem ascendente\n";

   for (i = 0; i < Tamanho; i++)
      cout << setw(4) << Vetor[i];

   cout << endl;
   return 0;
}
