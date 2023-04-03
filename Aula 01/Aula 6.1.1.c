#include<stdio.h>
int main()
{
    int v[5] = {10 , 20, 30, 40, 50};
    int i; // nao foi setado para o for
    float s = 0;
    for ( i = 0; i < 5; i++) // o i tem que setar de onde vai começar
    {
        printf("na posicao %d = %d\n",i , v[i]);
        s +=v [i];
    }
    printf("Total foi de %.2f", s/5);
    return 0;
}