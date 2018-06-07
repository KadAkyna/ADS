#include <iostream>
using namespace std;

int main()
{
   char letra;

   cout << "Digite uma vogal (maiúscula): ";
   cin >> letra;

   switch (letra)
   {
      case 'A': cout << "Você digitou a vogal A"; break;
      case 'E': cout << "Você digitou a vogal E"; break;
      case 'I': cout << "Você digitou a vogal I"; break;
      case 'O': cout << "Você digitou a vogal O"; break;
      case 'U': cout << "Você digitou a vogal U"; break;
      default : cout << "Você não digitou uma vogal";
   };

   return 0;
}
