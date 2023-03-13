#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,contador=1, resultado=1;
    printf("escolha um numero : ");
    scanf("%d",&n);
    while (contador<= n)
    {
        resultado *= contador;
        n++;
    }
    printf("O fatorial de %d eh %d\n", n ,resultado);
    return 0;
}
