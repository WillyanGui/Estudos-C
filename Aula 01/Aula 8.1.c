#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#define tam 3


struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    // criando uma linda de tamanho 3 para tipo_pessoa.
    tipo_pessoa lista[tam];
    // pra cada posição da lista tem Idade,Peso e nome da pessoa.
    int i;

    for ( i = 0; i < tam; i++) //tam esta definido como 3 no inicio do codigo
    {
        printf("Insira os dados (%d) :\n", i+1);
        puts("nome: ");
        scanf("%50[^\n]s", &lista[i].nome);
        fflush(stdin);

        puts("Idade : ");
        scanf("%d", &lista[i].idade);
        fflush(stdin);

        puts("Peso : ");
        scanf("%f", &lista[i].peso);
        fflush(stdin);
    }
    system("cls"); // limpa o cmd

    puts("Seus dados");

    for ( i = 0; i < tam; i++)
    {
        printf("----------- Pessoa %d -------------\n",i+1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade);
        printf("\tPeso : %.2f\n", lista[i].peso);
    }
    printf("------------------------------\n");





    return 0;
}

