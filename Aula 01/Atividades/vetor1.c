#include <stdio.h>
int main(int argc, char const *argv[])
{
    int v[5];
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("insira os valores:");
        scanf("%d", &v[i]);
    }
    printf("Posicao normal\n");
    for ( i = 0; i < 5; i++)
    {
        printf("na posicao %d temos o numero %d \n", i,v[i]);
    }
    printf("posicao inversa\n"); //inversor de posiçaõ
    for ( i = 4; i >=0; i--)
    {
        printf("na posicao %d temos o numero %d \n", i,v[i]);
    }
    

    return 0;
}