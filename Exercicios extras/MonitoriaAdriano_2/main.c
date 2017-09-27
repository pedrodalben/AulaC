#include <stdio.h>
#include <stdlib.h>
float x,quadrado,cubo;
int main()
{
    printf("digite um valor\n");
    scanf("%f",&x);
    quadrado= x *x ;
    cubo = x * x * x;
    printf("o nomero %0.2f ao quadrado eh: %0.2f\n",x,quadrado);
    printf("o nomero %0.2f ao cubo eh: %0.2f \n",x,cubo);
    return 0;
}
