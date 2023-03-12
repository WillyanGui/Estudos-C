#include <stdio.h>
int main()
{
    printf("oi, tudo bem? tenho 6 anos e programo.\n");
    printf("valor inteiro : %d.\n", 10); //o %d subistui o valor 10.
    printf("Valor real : %f .\n", 3.141459265); //o %f é para numeros com virgula.
    printf("Valor real com apenas duas casas: %.2f.\n", 3.14151415); //o %.2f é pra imprimir numero com somente o total de casas x
    printf("Dado do texto: %c.\n", 'a'); //dado de texto de um caractere
    printf("Dado de texto: %s.\n", 'testando'); // o %s subistutui a frase apos o o texto.
    return 0;
}
