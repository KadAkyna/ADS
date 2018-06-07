#include <stdio.h>

Int n = 23
Switch (n%5)
{
case 0: n+=3;
case 1: n+=2; break;
case 2: n++;
case 3: n-=3; break;
case 4: n-=2;
default: n--;
};
Printf(“%d”,n);
