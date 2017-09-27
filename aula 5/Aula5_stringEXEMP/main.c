#include <stdio.h>
#include <stdlib.h>

char nome[50];

int main()
{
    printf("Digite Seu nome : ");

    gets(nome);
        system("cls");
    printf("ola %s\n",nome);


    return 0;
}
