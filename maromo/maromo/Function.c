//functions

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <dos.h>

void  sortear(int jogo[], int t){

    int aux;
    int i;
     printf(">>> Os Numeros sorteados sao: ");

    for(i=0; i<60; i++){
        jogo[i]=0;
    }
    srand( (unsigned)time(NULL) );
   for(i=0; i<t; i++){

   aux = (rand() % 60) + 1;
   printf("%d, ",aux);
   jogo[aux] = 1;
  }
  printf("\n");
}

void palpitar(int palp[5][6], int t){
    int i;
    int j;
    for (j=0;j<5;j++){
            system("cls");

    printf(" _________________________________________\n");
    printf("|                                         |\n");
    printf("|                 cartela %d               |\n",j+1);
    printf("|_________________________________________|\n");
    for(i=0; i<t; i++){
        printf("Digite o palpite %d \n", i+1);
        scanf("%d", &palp[j][i]);
    }
}
system("cls");
}


void verificar(int jogo[],int palp[5][6], int tj, int tp){
        int i, j;
        int aux,help,k=0;

        printf("Estamos Analizando os Resultados ");

        for(i=0;i<40;i++){
        printf("> ");
            int c = 1, d = 1;

                for ( c = 1 ; c <= 10176 ; c++ )
                for ( d = 1 ; d <= 10276 ; d++ )
                                            {}
        }
            printf("\n");
         for (j=0;j<5;j++){
                aux=0;

        for(i=0; i<tp; i++){
                help=palp[j][i];
               if(jogo[help]==1){
                        printf("Acertou o palpite : %d na cartela : %d   \n", help,j+1);
                        aux=aux +1;
                        k=k+1;
                }
        }
            if (aux>1){
                    printf("voce ganhou seu puto acertando: %d vezes na cartela : %d\n",aux,j+1);
                }

        }
         if (k==0){

                    printf("\nVoce nao acertou nem um palpite\n");
         }

}
