#include<stdlib.h>
#include<stdio.h>
typedef struct Cinema
{
    char *horario[10];
    float *preco;
    int *lugares;
} filme;

void cinema(filme *l, int n){
    int resp;
    *(l->preco)=10;
    *(l->horario)="18:00";
    l->lugares = malloc(n*sizeof(int));
    for (int  j = 0; j < n; j++)
    {
        l->lugares[j] = 0;
    }
    

}