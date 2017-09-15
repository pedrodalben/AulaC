#include <stdio.h>
#include <stdlib.h>
#define Valor 10
int A[Valor],B[Valor];
int y;

int main()
{
     for (y=0;y<Valor;y++){
        printf("Digite o Valor %d\n",y+1);
        scanf("%d",&A[y]);
        if (A[y]% 2 == 0) {
            B[y]=A[y]*5;
        }
        else
            B[y]=A[y]+5;
     }
     for (y=Valor-1;y>=0;y--){
            printf("A%d= %d ------- B%d= %d \n", y+1,A[y],y+1,B[y]);

     }

    return 0;
}
