#include <stdio.h>
#include <stdlib.h>

int main()
{

    char sexo;
    float ordenado,conta ;

    printf("Digite seu sexo : F (Feminino), M (Masculino)\n");
    sexo = getchar();
    fflush(stdin) ;
    printf("Digite seu salario\n");
    scanf("%f",&ordenado);
      switch (sexo){
          case 'f':
          case 'F':
          conta = ordenado * 0.1 ;
          break;
          case 'm':
          case 'M':
          conta = ordenado * 0.15 ;
          break;

      }

      printf("O o imposto pago por Voce eh de %6.2f \n " , conta);


    return 0;
}
