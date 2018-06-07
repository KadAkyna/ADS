#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{

    int cont, n, x;

    x = 0;

    srand(time(NULL));

    for(cont=1;cont<=6;cont++)
    {
        n = rand() % 60 + 1;

        if (n == x)
        {
            return 1;
        }


        else
        {
            printf("Os números escolhidos são: %d %d\n", cont, n);

            x = n;
        }

    }

        return 0;

}





