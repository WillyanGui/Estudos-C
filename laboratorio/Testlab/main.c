#include "carta.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int j;
    char impcarta;
    srand(time(NULL));
    Carta c1, c2;
    inicializa(&c1, 10, 'C');
    compracarta(&c2);
    

    printf("Valor: %d, Naipe: %c\n", c1.valor, c1.naipe);
    printf("Valor: %d, Naipe: %c\n", c2.valor, c2.naipe);
    printf("deseja comprar mais cartas 1/s 0/n\n?");
    scanf("%d", &j);
    if (j==1)
    {
        compracarta(&c2);
        imprimecarta(&imp);
    }

    return 0;
}
