#include <stdio.h>
int main()
{
    int anos;
    float salario,soma,inicial,bonus;
    printf("Anos de contribuicao : \n");
    scanf("%d",&anos);
    printf("salario\n");
    scanf("%f",&salario);
    inicial= salario;
    if (anos>=5)
    {
        soma= salario*20/100;
        bonus = salario+soma;
        printf("salario normal : %.2f\n", inicial);
        printf("salario bonus: %.2f\n", soma);
        printf("Salario com o bonus %.2f:\n", bonus);

    }
    else if (anos<5)
    {
        soma= salario*10/100;
        bonus = salario+soma;
        printf("salario normal : %.2f\n", inicial);
        printf("salario bonus: %.2f\n", soma);
        printf("Salario com o bonus %.2f:\n", bonus);

    }
    
    
    return 0;
}
