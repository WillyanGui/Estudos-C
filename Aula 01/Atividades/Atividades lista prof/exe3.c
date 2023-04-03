#include<stdio.h>

int main()
{
    int n, i,soma=0;
    printf("insira o valor do array : ");
    scanf("%d", &n);
    int *array = malloc(n* sizeof(int));
    if (array==NULL)
    {
        printf("não foi possivel salver memoria \n");
        exit(1);
    }
    

    for ( i = 0; i < n; i++)
    {
        printf("Insira os valores de cada array : ");
        scanf("%d",&array[i]);
        soma+=array[i];
    }
    printf("a soma foi de = %d ", soma);


    return 0;

}