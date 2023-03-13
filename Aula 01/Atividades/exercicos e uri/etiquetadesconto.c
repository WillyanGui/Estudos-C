#include<stdio.h>
int main()
{
    int condicao;
    float etiqueta, soma , calculo, precoinicial, precofinal;
    printf("Preco do produto : \n");
    scanf("%f", & etiqueta);
    printf("condicao do produto :\n");
    scanf("%d", &condicao);
    precoinicial = etiqueta;
    switch (condicao)
    {
    case 1:
        calculo= (etiqueta*0.10);
        precofinal = (etiqueta-calculo); // cuidado com inversão de ordens
        printf("o valor inicial era : %2.f \n", precoinicial);
        printf("o valor com disconto e : %.2f\n", precofinal);
        printf("o desconto foi de : %2.f\n", calculo);
        break;
    case 2:
        calculo= (etiqueta*0.05);
        precofinal = (etiqueta-calculo); // cuidado com inversão de ordens
        printf("o valor inicial era : %.2f \n", precoinicial);
        printf("o valor com disconto e : %.2f\n", precofinal);
        printf("o desconto foi de : %.2f\n", calculo);
        break;
    case 3:
        printf("o valor inicial era : %.2f \n", precoinicial);
        printf("nao ouve desconto, o valor e de : %.2f\n",precoinicial);
        break;
    case 4:
        calculo= (etiqueta*0.10);
        precofinal = (etiqueta+calculo); // cuidado com inversão de ordens
        printf("o valor inicial era : %.2f \n", precoinicial);
        printf("o valor total a pagar e : %.2f\n", precofinal);
        printf("o acrecimo foi de : %.2f\n", calculo);
        break;
    default:
        printf("Nao foi encontrado a condicao\n");
    }

    return 0;
}
