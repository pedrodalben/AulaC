#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <dos.h>

void  sortear(int jogo[], int t){

    int aux;
    int i;

        printf("\t \t\t\t\t=============================\n");
        printf("\t \t\t\t\t|           LOTO C          |\n");
        printf("\t \t\t\t\t=============================\n\n");
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
  printf("\n\n\n\n");
}

void palpitar(int palp[5][6], int t){
    int i;
    int j;
    for (j=0;j<5;j++){
            system("cls");
            system("color 02");
            printf("\t \t\t\t\t=============================\n");
            printf("\t \t\t\t\t|           LOTO C          |\n");
            printf("\t \t\t\t\t=============================\n\n");


            printf(" __________________________________\n");
            printf("|                                  |\n");
            printf("|             cartela %d            |\n",j+1);
            printf("|__________________________________|\n");
    for(i=0; i<t; i++){
        printf("\nDigite o palpite entre 1 e 60\n %d%c = ", i+1,167);

        scanf("%d", &palp[j][i]);
        if (palp[j][i]>60 ){
            i=i-1;
            printf("O Numero digitado eh maior que 60 \n");
        }
         if (palp[j][i]<1 ){
            i=i-1;
            printf("O Numero digitado eh menor que 1 \n");
        }
    }
}
system("cls");
}


void verificar(int jogo[],int palp[5][6], int tj, int tp){
        int i, j;
        int aux,help,k=0;

        printf("Estamos Analizando os Resultados \n");

        for(i=0;i<40;i++){
        printf(" > ");
            int c = 1, d = 1;

                for ( c = 1 ; c <= 9176 ; c++ )
                for ( d = 1 ; d <= 9276 ; d++ )
                                            {}
        }
            printf("\n\n\n");
         for (j=0;j<5;j++){
                aux=0;

        for(i=0; i<tp; i++){
                help=palp[j][i];
               if(jogo[help]==1){
                        printf(">>>Acertou o palpite : %d na cartela : %d   \n", help,j+1);
                        aux=aux +1;
                        k=k+1;
                }
        }
            if (aux>1){
                    printf("\a>>>Voce ganhou seu puto acertando: %d vezes na cartela : %d\n",aux,j+1);
                }

        }
         if (k==0){

                    printf("\n>>>Voce nao acertou nem um palpite\n\n\n\n\n");
         }

         printf("Trabalho Realizado Por : Ademir Pereira, Alair Bellini, Hegon Roberto, Pedro Dalben.\n ");
         system("pause");

}
