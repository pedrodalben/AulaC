#include <stdio.h>
#include <stdlib.h>

float raio,pi=3.14;
float circu;


int main()
{
    printf("digite o raio\n");
    scanf("%f",&raio);
    circu= (raio * raio)*pi;

    printf("a circuferencia eh: %f",circu);
    return 0;
}
