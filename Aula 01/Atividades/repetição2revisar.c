#include<stdio.h>
int main()
{
    int salario,filhos,populacao,c1=1,p1=1,soma,media,mediafilhos=0,somafilhos;
    printf("quantidade de populacao : \n");
    scanf("%d", &populacao);
    
    do
    {
        printf("Salario : ");
        scanf("%d", &salario);
        printf("Quantidade de filhos :");
        scanf("%d", &filhos);
        somafilhos+=filhos;
        soma+=salario;
        media=soma/populacao;
            if (salario<=100) // porcentual de pessoas 
                { 
                    p1++;
                }
        c1++;

    } while (c1<=populacao);

    printf("salario total da populacao: %d \n", soma);
    printf("a media do salario da populacao e : %d\n", media);
    printf("porcentual de pessoas com salario abaixo de 100 : %d\n ", (p1*100)/populacao);
    printf("media de filhos : %d", (mediafilhos/populacao));
    //printf("maior salario : %d \n", maior);
    //printf("menor salario : %d", menor);
    return 0;
}
