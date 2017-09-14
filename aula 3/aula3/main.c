#include <stdio.h>
#include <stdlib.h>


int main()

{
    char estado;
   float sal,i,liq;


    printf("Digite seu estado civil! S para SOLTEIRO , C para CASADO\n");
    estado=getchar();

    printf("Digite seu salario bruto\n");
    scanf("%f",&sal);
    switch(estado){
        case 's':
        case 'S':
         i= sal * 0.10 ;

         break;

        case 'c':
        case 'C':
         i = sal * 0.09;
         break;
        default:
            printf("Opçao invalida");

    }
    liq= sal - i;
    printf("imposto a pagar  %6.2f\n",i);
    printf("salario liquido  %6.2f\n",liq);



    return 0;
}
