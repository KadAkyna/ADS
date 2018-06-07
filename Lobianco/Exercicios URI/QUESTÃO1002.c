#include <stdio.h>

int main() {

float pi = 3.14159;
double raio;

scanf("%lf", &raio);

float area = pi * (raio * raio);
printf("A= %.4lf\n" , area);

    return 0;
}
