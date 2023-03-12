#include <stdio.h>
#include <math.h>
int main()
{
    int soma, sub, multiplica, divide, a, b;
    printf("digite o primeiro valor : \n");
    scanf("%d", &a);
    printf("digite o segundo valor : \n");
    scanf("%d", &b);
    //Calculos
    soma = a+b;
    sub = a-b;
    multiplica = a*b;
    divide = a/b;
    // resultados
    printf("Resultados.\n");
    printf("Soma : %d.\n", soma);
    printf("Sub: %d.\n", sub);
    printf("Multiplica : %d.\n", multiplica);
    printf("Divide : %d.\n", divide);

    return 0;
}
