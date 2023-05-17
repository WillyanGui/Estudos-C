#include<stdio.h>
#include<stdlib.h>

typedef struct Aulalab3
{
    int peso;
    int *idade;
}lab;
void inicializa(lab *l, int peso, int idade){
    int n;
    l->peso=peso;
    l->idade=malloc(sizeof(int));
    *(l->idade)=idade;

}
int main()
{
    int valor,idade;
    idade = 0;
    lab l;
    l.peso=55;
    printf("peso atual : %d \n", l.peso);
    puts("escreva um peso");
    //peso normal passando pela struct
    scanf("%d",&(l.peso));
    printf("novo peso %d \n", (l.peso));
    inicializa(&l,valor,idade);
    // idade passando pelo ponteiro
    *(l.idade)=10;
    printf("idade atual %d \n", *(l.idade)); // para apontar para o conteudo é necessario *(atributo)
    puts("Escolha uma nova idade");
    scanf("%d",l.idade); // para informar uma nova idade não é necessario o &, poius l.idade já é o endereço.
    printf("idade alternada %d : \n", *(l.idade)); // para mostrar a nova idade é necessario o *(l.idade)).
    return 0;
}
