#include <stdio.h>
#include <stdlib.h>

float vet[4];
float media=0,recuperacao,mediaRec;
int i;

int main()
{
    for (i=1;i<5;i++)
    {
        printf("digite a a nota %d \n",i);
        scanf( "%f",&vet[i]);
        media = media+vet[i];
    }
    media=media/4;
    if (media >= 7) {
        printf("Voce passou de ano com a media: %f  \n ",media);}

        else
        {
            printf("o aluno esta de recuperaçao coma media : %f\n \n ",media);
            printf("digite a nota de recuperaçao \n  ");
            scanf("%f",&recuperacao);

            mediaRec= (media + recuperacao)/2;

            if (mediaRec >= 5)
                printf("aluno aprovado na recuperaçao com a media :%f\n",&mediaRec);

                else

                    printf("aluno reprovado na recuperaçao com a media %f\n",&mediaRec);


        }




    return 0;
}
