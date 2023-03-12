#include <stdio.h>
int main()
{
    int idade =0; // com o valor ja setado em 0
    int ano = 2023;
    float peso = 0.0;
    printf("Valor inicial da idade: %d.\nAno atual :%d", idade, ano); // mostra a idade indeficada em "idade"

    printf("\ndigite uma idade e o ano\n"); // digitar uma nova idade
    scanf("%d %d", &idade, &ano); // passa um novo valor para a memoria "idade"

    printf("informe o peso atual: \n");
    scanf("%f", &peso);

    printf("idade informada :%d.\nMostra o ano informado :%d\n", idade,ano); // mostra a nova idade adquirida atraves do "scanf"
    printf("mostra o peso atual :%.2f.\n",peso);
    return 0;
}
