#include<stdio.h>
#include<string.h>
#include<locale.h>

#define tam 50
    struct tipo_pessoa
    {
        int idade;
        float *peso;
        char nome[tam];
    };

    typedef struct tipo_pessoa tipo_pessoa;
    
int main()
{
    setlocale(LC_ALL, "portuguese");
    int idade=33;
    int n;
// Criando e inicializando a variavel
    tipo_pessoa pes = {0,"teste"}; // definiu pes
    pes.peso=
    printf("inicio\n");
    printf("pes.idade : %d\n", pes.idade);
    printf("pes.peso : %.2f\n",*(pes.peso));
    printf("pes.nome : %s\n",pes.nome);

    //Atribuindo valores ao campo

    pes.idade=10;
    pes.peso=11.2;
    strcpy(pes.nome, "Willyan");

    // valores fixos no codigo

    printf("\n Alterando os campos no codigo\n");
    printf("pes.idade : %d\n", pes.idade);
    printf("pes.peso : %.2f\n",pes.peso);
    printf("pes.nome : %s\n",pes.nome);

    // Mudando valor por entrada no teclado(pelo usuario);

    printf("\nAlteração pelo usuario\n");

    printf("digite a idade\n");
    scanf("%d", &pes.idade);
    printf("digite o peso\n");
    scanf("%f",&pes.peso);
    printf("digite o nome\n");
    scanf("%s", pes.nome);

    // valores alterados pelo usuario

    printf("\n Valores alterado pelo usuario\n");
    printf("pes.idade : %d\n", pes.idade);
    printf("pes.peso : %.2f\n",pes.peso);
    printf("pes.nome : %s\n",pes.nome);

    printf("idade %d", idade);
    return 0;
}
