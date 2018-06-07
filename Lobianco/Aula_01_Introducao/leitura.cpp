#include <iostream>

int main()
{
   int inteiro1, inteiro2, soma;

   std::cout << "Digite o primeiro número\n";
   std::cin >> inteiro1; 
   std::cout << " Digite o segundo número \n";
   std::cin >> inteiro2; 
   soma = inteiro1 + inteiro2;
   std::cout << "A soma é " << soma << std::endl;
   return 0;
}
