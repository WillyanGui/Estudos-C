#include<stdio.h>
int main()
{
    int n1, n2;
    printf("escolha o primeiro numero : \n");
    scanf("%d", &n1);
    printf("escolha o segundo numero : \n");
    scanf("%d", &n2);
     if (n1>n2)
        {
            printf("o numero um e maior que o numero dois : \n");
            printf("Numero um %d\nNumero dois : %d", n1, n2);
        }
        if (n2>n1)
        {
            printf("o numero dois e maior que o numero um\n");
            printf("Numero dois %d\nNumero um : %d", n2, n1);
        }
        if (n1==n2)
        {
            printf("Os numeros sao iguais.");
        }
        return 0;
}
