#include <stdio.h>
#include <stdlib.h>

int* pares(int* array, int tamanho) {
    int* novo_array = malloc(tamanho * sizeof(int));
    int i, j = 0;
    for (i = 0; i < tamanho; i++) {
        if (array[i] % 2 == 0) {
            novo_array[j++] = array[i];
        }
    }
    return novo_array;
}

int main() {
    int original[10];
    int k;
    for ( k = 0; k < 10; k++)
    {
        printf("escolha os numeros");
        scanf("%d",&original[k]);
    }
    int* pares_array = pares(original, 10);
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d ", pares_array[i]);
    }
    free(pares_array);
    return 0;
}
