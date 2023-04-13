#include <stdio.h>
#include <stdlib.h>

struct aluno {
    char nome[50];
    int idade;
    float *notas;
    int tamanho;
    float media;
};
void calcular_media(struct aluno *aluno_ptr) {
    float soma_notas = 0;
    for (int i = 0; i < aluno_ptr->tamanho; i++)
        soma_notas += aluno_ptr->notas[i];

    aluno_ptr->media = soma_notas / aluno_ptr->tamanho;
}
int main() {
    struct aluno novo_aluno = {0};
    printf("Digite o nome do aluno: ");
    scanf("%s", novo_aluno.nome);
    printf("Digite a idade do aluno: ");
    scanf("%d", &novo_aluno.idade);
    printf("Digite o tamanho da lista de notas: ");
    scanf("%d", &novo_aluno.tamanho);
    novo_aluno.notas = (float*)malloc(novo_aluno.tamanho * sizeof(float));
    for (int i = 0; i < novo_aluno.tamanho; i++) {
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &novo_aluno.notas[i]);
    }
    calcular_media(&novo_aluno);
    printf("Nome: %s\nIdade: %d\nNotas: ", novo_aluno.nome, novo_aluno.idade);
    for (int i = 0; i < novo_aluno.tamanho; i++) {
        printf("%.2f ", novo_aluno.notas[i]);
    }
    printf("\nMedia: %.2f\n", novo_aluno.media);
    free(novo_aluno.notas);
    return 0;
}
