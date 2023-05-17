#include<stdio.h>
#include<stdlib.h>

typedef struct Cinema
{
    char horario[10];
    float preco;
    int *lugares;
} Cinema;

void lugar(Cinema *l, int n){
    int resp;
    scanf("%d",&n);
    l->lugares = malloc(n*sizeof(int));
    for (int  j = 0; j < n; j++)
    {
        l->lugares[j] = 0;
    }
    for (int k = 0; k < n; k++)
    {
        printf("Deseja comprar a posicao [%d] ? 1=s/2=n\n", k);
        scanf("%d", &resp);
        if (resp == 1) {
            l->lugares[k] = 1;
        }
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ", l->lugares[k]);
    }
}
// 10
int lugaresvazios(Cinema l){
    int cont=0;
    for (int i = 0; i < sizeof(l.lugares) ; i++)
    {
        if (l.lugares[i]==0){

            cont++;
        }
    }
    return cont;

}
int main() {
    Cinema filme;
    lugar(&filme, 5);
    return 0;
}



