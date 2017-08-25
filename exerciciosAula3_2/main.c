#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numDaConta, saldo , i , alteracao  ;
    int opcao;

    printf("Digite o Numero da Conta\n");
    scanf("%f",&numDaConta);
    printf("Digite o Saldo da Conta\n");
    scanf("%f",&saldo);

        printf("escolha uma opcao\n1) depositar\n2) retirar\n");
        scanf("%d",&opcao);

            switch (opcao) {
                case 1 :
                    printf("digite um valor a depositar\n");
                    scanf("%f",&i);
                    alteracao = saldo+i;
                    printf("seu saldo agora eh de %6.2f\n",alteracao);
                    break;
                case 2:
                    printf("digite um valor a sacar\n");
                    scanf("%f",&i);
                      if (i <= saldo){
                      alteracao = saldo-i;
                      printf("seu saldo agora eh de %6.2f\n",alteracao);}
                      else
                      printf("Voce nao pode sacar um valor maior do que voce tem\n");
                    break;
                default:
                    printf("opcao invalida\n");



            }

    return 0;
}
