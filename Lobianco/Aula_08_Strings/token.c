#include <iostream>

using std::cout;
using std::endl;

#include <cstring>

int main()
{
   char string[] = "Esta frase possui 7 unidades léxicas (tokens)";
   char *tokenPtr;

   cout << "A string que vai ser dividida é:\n" << string
        << "\n\nOs tokens são:\n";

   tokenPtr = strtok( string, " " );

   while ( tokenPtr != NULL )
   {
      cout << tokenPtr << '\n';
      tokenPtr = strtok( NULL, " " );
   }

   return 0;
}

