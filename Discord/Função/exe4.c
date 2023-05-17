#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct Cinema
{
    char filme[50];
    int lugares[5];
    int horario;
    float preco;
}filme;
int main()
{
    int n, lugar;
    char y;
    filme l;
    printf("Filme : ");
    fgets(l.filme, 50 ,stdin);
    printf("Preco");
    scanf("%f",&l.preco);
    for (int i = 0; i < 5; i++)
    {
        l.lugares[i]=0;
        printf("%d",l.lugares[i]);
    }

    printf("\nlugares disponiveis 5\n");

    for (int j = 0; j < 5; j++)
    {
        printf("\nDeseja comprar o local [%d] y/n\n?", j);
        scanf("%c",&y);
    if (y == 'y' || y=='Y') 
        {
            l.lugares[j]=1;
        }
    else if (y=='n' || y=='N')
    {
        l.lugares[j]=0;
    }
    else{
        printf("resposta invalida");
    }
    }
    for (int k = 0; k < 5; k++)
    {
         printf("Lugar %d: %s\n", k+1, l.lugares[k] ? "vendido" : "disponível");
    }
    
    return 0;
}