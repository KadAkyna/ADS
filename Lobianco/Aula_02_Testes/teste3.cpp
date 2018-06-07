#include <iostream>
using namespace std;

int main()
{
   int num1, num2;

   cout << "Digite dois inteiros, e apresentarei\n"
        << "os seus relacionamentos: ";
   cin >> num1 >> num2;

   if ( num1 == num2 )
      cout << num1 << " é igual a " << num2 << endl;
   if ( num1 != num2 )
      cout << num1 << " não é igual a " << num2 << endl;
   if ( num1 < num2 )
      cout << num1 << " é menor que " << num2 << endl;
   if ( num1 > num2 )
      cout << num1 << " é maior que " << num2 << endl;
   if ( num1 <= num2 )
      cout << num1 << " é menor ou igual a " << num2 << endl;
   if ( num1 >= num2 )
      cout << num1 << " é maior ou igual a " << num2 << endl;

   return 0;
}
