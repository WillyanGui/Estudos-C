#include<stdlib.h>
#include<stdio.h>
typedef struct Cinema
{
    char *horario[10];
    float *preco;
    int *lugares;
} filme;

float vendeIngresso(filme *l, int p) {
    *(l->preco)=10;
    if (l->lugares[p] == 0) { // verificar se a posição está disponível
        l->lugares[p] = 1; // marcar a posição como ocupada
        return *(l->preco); // retornar o preço do ingresso
    } else {
        return -1; // caso contrário, retornar -1 para indicar que a venda não foi bem-sucedida
    }
}