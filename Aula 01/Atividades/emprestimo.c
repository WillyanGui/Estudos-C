#include<stdio.h>
int main(int argc, char const *argv[])
{
    float valor,salario;
    int parcelas,porcentagem;
    printf("Salario\n");
    scanf("%f",&salario);
    printf("Valor do emprestimo\n");
    scanf("%f",&valor);
    printf("Quantidade de parcelas\n");
    scanf("%d",&parcelas);
    if (valor/parcelas<=salario*0.3)
    {
        printf("o emprestimo e aprovado pois o valor da parcela e maior do que o salario");
    }
    else
    {
        printf("e negado");
    }

    return 0;
}
