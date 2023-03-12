#include<stdio.h>~
#define texto "Entrada e saida de dados"
int main()
{
    int idade=0;
    float altura=0.0;
    char nome[50];
    printf("%s\n", texto);

    printf("digite o nome:\n");
    scanf("%s",&nome);

    printf("Digite idade :\n %d");
    scanf("%d", &idade);

    printf("Digite altura:\n ");
    scanf("%f",&altura);

    printf("dados mencionados\n");
    printf("Nome mencionado: %s \n", nome);
    printf("idade mencionada : %d \n", idade);
    printf("altura mencionada : %.2f \n", altura);

    return 0;
}
