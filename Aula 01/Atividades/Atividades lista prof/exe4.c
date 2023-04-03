#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int n,i,aleatorio;
    printf("Escolha o tamanho do array");
    scanf("%d",&n);
    int *tamanho = malloc(n* sizeof(int));
    srand(time(NULL));
    if (tamanho==NULL)
    {
        printf("não foi possivel salver memoria \n");
        exit(1);
    }

    for ( i = 0; i < n; i++)
    {
       tamanho[i]=rand() %100;
    }
    printf("Array aleatorios gerados em cada posicao\n");

    for ( i = 0; i < n; i++)
    {
        printf("\nNa posicao %d temos %d\n", i,tamanho[i]);
    }
    printf("\n");
    return 0;
}
