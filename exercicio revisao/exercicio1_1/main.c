#include <stdio.h>
int x[10],i,pares=0;


int main() {
    for(i=1;i<=10;i++){
        printf("digite um numero\n");
        scanf("%d",&x[i]);

    }
    for(i=1;i<=10;i++){
        if ((x[i]%2)==0){
            pares = pares +1;

        }


    }
    printf("o total de pares eh: %d\n",pares);
    for(i=1;i<=10;i++){
         if ((x[i]%2)==0) {
            printf("%d , ",x[i]);
        }
    }

}
