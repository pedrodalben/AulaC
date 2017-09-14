#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra,letra2 ;
    printf("Digite um caractere\n");
    scanf("%c",&letra);
    fflush(stdin) ; // limpa o buffer do teclado
    printf("Digite outro caractere\n");
    scanf("%c",&letra2);
    printf("letras digitadas %c e %c\n",letra,letra2);
    return 0;
}
