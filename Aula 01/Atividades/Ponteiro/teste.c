#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    int **pp = &p;

    printf("Valor de x antes: %d\n", x); // Imprime "Valor de x antes: 10"
    **pp++ = 20; // Altera o valor de x para 20 e incrementa pp para apontar para o próximo endereço
    printf("Valor de x depois: %d\n", x); // Imprime "Valor de x depois: 20"

    return 0;
}
