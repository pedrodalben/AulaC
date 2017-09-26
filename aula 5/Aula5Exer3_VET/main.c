#include <stdio.h>
#include <stdlib.h>
#define VAL 8

int VetA[VAL],VetB[VAL];
int y;

int main()
{
    for (y=0;y<VAL;y++){
        printf("Digite o Valor %d\n",y+1);
        scanf("%d",&VetA[y]);
        VetB[y] = VetA[y] * 3; }
        system("cls");

        for (y=0;y<VAL;y++){
            printf("VETOR A- POSICAO %d = %d |||||| VETOR B- POSICAO %d = %d\n",y+1,VetA[y],y+1,VetB[y]);
        }

    return 0;
}
