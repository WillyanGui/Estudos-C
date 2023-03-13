#include <stdio.h>
int main(int argc, char const *argv[])
{
    float n1, n2, media;
    printf("\ndigite a nota 1 :");
    scanf("%f",&n1);
    printf("\ndigite a nota 2 : ");
    scanf("%f",&n2);
    media= n1+n2/2;
    if (media<3)
    {
        printf("reprovado.");
    }
    else if (media>=3 && media<7)
    {
        printf("exame");
    }
    else if (media==10)
    {
        printf("aprovado com distinção");
    }
    else if (media>=7)
    {
        printf("aprovado");
    }
    else
    {
        printf("valor não encontrado");
    }

    return 0;
}
