#include <stdio.h>
#include <stdlib.h>
#define ALUNOS 2

int RA[ALUNOS];
float notas[ALUNOS];
float nota1,nota2,media;
int y;
int main()
{
      for (y=0;y<ALUNOS ;y++){

        printf("digite o RA Do Aluno %d\n",y+1);

        scanf("%d",&RA[y]);
        printf("digite a primeira nota \n");
        scanf("%f",&nota1);
        printf("digite a segunda nota \n");
        scanf("%f",&nota2);
        printf("%d\n",RA[y]);
        media=(nota1+nota2)/2;
        notas[y]=media;
        printf("%f\n",notas[y]);


      }
      for (y=0;y<ALUNOS ;y++){

      printf("a media do aluno  do RA %d eh: %f\n",RA[y],notas[y]);

      }
    return 0;
}
