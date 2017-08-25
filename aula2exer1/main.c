#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    float  area,perimetro,raio;
        printf("Digite o valor do Raio: \n");
        scanf("%f",&raio);
             area= PI * raio *raio;
             perimetro= 2 * PI  * raio;
             printf("valor da area:%6.2f\n",area );
             printf("valor do perimetro: %6.2f\n",perimetro );
    return 0;
}
