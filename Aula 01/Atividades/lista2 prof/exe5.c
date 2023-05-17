#include<stdio.h>
#include<stdlib.h>
typedef struct filme
{
    char *nome[50];
    char *diretor[50];
    int ano;
    int minutos;
}retornafilme;

void informacoes(retornafilme *retornafilme, int ano, int minutos, char nome[50]){
    retornafilme->ano=2023;
    retornafilme->minutos=9999;
    *retornafilme->nome="Aeds1";
    *retornafilme->diretor="Willyan";
}
//6
int contar_filmes_por_diretor(struct Filme *filmes[], int tamanho, char diretor[]) {
    int qtd_filmes = 0;
    
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(*filmes[i].diretor, diretor) == 0) {
            qtd_filmes++;
        }
    }
    
    return qtd_filmes;
}
int main()
{
    retornafilme l;
    int v1,v2;
    char nome[50], diretor[50];
    informacoes(&l,v1,v2,nome[50]);
    printf("%s,%s, %d, %d", *(l.nome),*(l.diretor),l.ano,l.minutos);
    return 0;
}
