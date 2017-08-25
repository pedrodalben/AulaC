#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ordenado,i ;
    printf("Digite seu ordenado\n");
    scanf("%f",&ordenado);
    i = ordenado>1000 ? ordenado*1.05 : ordenado*1.07;
    printf("Seu novo salario sera de : %6.2f",i);
    return 0;
}
