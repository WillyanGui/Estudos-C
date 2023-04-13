#include<stdio.h>

float conversor(float x, int transformacao){
    float polegadas, metro, resultado=0;
    switch (transformacao)
    {
    case 1:
        polegadas=x*39.37;
        resultado=polegadas/12;
        break;
    
    case 2:
        metro=x*12;
        resultado=metro/37;
        break;
    default:
        puts("valor invalido");
        break;
    }
    return resultado;
}

int main()
{
    float a, resultado;
    int transformacao;
    printf("digite a medida em metros : ");
    scanf("%f", &a);
    puts("Temos as seguites opcoes");
    puts("1.Metros para polegadas");
    puts("2.Polegadas para metros");
    puts("Escolha a conversao a fazer");
    scanf("%d", &transformacao);
    resultado=conversor(a, transformacao);
    if (resultado!=0)
    {
        if (transformacao==1)
    {
        printf("Em metros para polegadas e %.2f ",resultado);
    }
    else if (transformacao==2)
    {
        printf("Em polegadas para metros e %.2f ",resultado);
    }
    
    }
    
    
    
    
    return 0;
}
