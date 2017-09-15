#include <stdio.h>
#include <stdlib.h>
#define Valor 5

float vet[2];
int y;
int aux;
float porce;
int main()
{
for (y=0;y<Valor;y++){
        printf("Digite o Valor %d\n",y+1);
        scanf("%d",&aux);
        if (aux %2 == 0 ){
            vet[1]=aux+vet[1];

        }
        else
             vet[2]=aux+vet[2];

    }
    printf("A Soma de todos os pares eh: %0.2f\n",vet[1]);
    printf("A Soma de todos os impares eh: %0.2f\n",vet[2]);
    printf("A Soma de  pares com impares  eh: %0.2f\n",vet[1]+vet[2]);

    porce= (((vet[1]+vet[2])/ vet[2])-1)*100 ;


    printf("porcetagem de impares sobre pares= %.2f%% \n ",porce);



    return 0;
}
