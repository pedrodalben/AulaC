#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void palpitar(int palp[5][6], int t);
void  sortear(int jogo[], int t);
void verificar(int jogo[],int palp[5][6], int tj, int tp);

int main()
{

    int jogo[60];
    int palp[5][6];

    palpitar(palp, 6 );
    sortear(jogo, 6);
    verificar(jogo, palp, 60, 6);

    return 0;
}
