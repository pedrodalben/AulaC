#include <stdio.h>
#include <stdlib.h>
float pe,polegadas,jardas,milhas;

int main()
{
    printf("digite uma medida\n ");
    scanf("%f",&pe);
    polegadas = pe * 12;
    jardas = pe/3 ;
    milhas = jardas / 1760;
    printf("polegadas : %f \n jardas : %f\n milhas : %f",polegadas,jardas,milhas);
    return 0;
}
