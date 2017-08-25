#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b ;
    printf("Digite o valor 'A'\n");
    scanf("%f",&a);
    printf("Digite o valor 'B'\n");
    scanf("%f",&b);
        if (a>b)  printf("O maior valor eh : %6.2f\no menor valor eh : %6.2f",a,b) ;
        else  printf("O maior valor eh : %6.2f\no menor valor eh : %6.2f",b,a);

    return 0;
}
