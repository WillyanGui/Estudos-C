#include<stdio.h>
int main()
{
    int salario, horario,conta;
    printf("salario : \n");
    scanf("%d", &salario);
    printf("horas adicionais");
    scanf("%d", & horario);
    if (horario >=40 && horario <= 60)
    {
        conta=salario/2;
        salario=salario+conta;
        printf("o bonus foi aplicado de 50 porcento, o novo salario foi de %d",salario);
    }
else if (horario>=60)
{
    salario=salario+salario;
    printf("o bonus maximo foi aplicado o novo salario e de %d",salario);
}
    

    return 0;
}
