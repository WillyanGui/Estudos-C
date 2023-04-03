#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int jogadas, i , acertou=0, errou=0,imparpar, numero,actimpar=0;
    printf(" numero de jogadas");
    scanf("%d",&jogadas);
    for ( i = 0; i < jogadas; i++)
    {
        srand(time(NULL));
        numero=rand() % 100;
        printf("par(0) ou impar(1)");
        scanf("%d", &imparpar);
        if (imparpar==0 && numero %2==0)
        {
            
            printf(" o jogador acertou, o numero foi : %d \n ", numero);
            acertou++;
        }
        else if (imparpar==1 && numero%2==1)
        {
            printf(" o jogador acertou, o numero foi : %d \n ", numero);
            actimpar++;
        }
        else{
            printf("o jogador errou...\n");
            errou++;
        }
        
    }
    printf(" o numero de acertos par foi de %d e impar foi de %d \n", acertou,actimpar);
    printf(" o numero de erros foi de %d \n", errou);
    return 0;
}
