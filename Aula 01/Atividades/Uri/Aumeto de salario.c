#include <stdio.h>
#include <math.h>
int main()
{
    int salario, porcentual, novosalario, inicial, resultado, salariofinal;
    printf("Incira o salario :\n");
    scanf("%d", &salario);
    inicial=salario;
    printf("porcentual de aumtento:\n");
    scanf("%d", &porcentual);

    novosalario = salario*porcentual/100;
    salariofinal= inicial+novosalario;

    printf("porcentual : %d \n", porcentual);
    printf("Almento : %d\n", novosalario);
    printf("Salariofinal: %d \n", salariofinal);


    return 0;
}
