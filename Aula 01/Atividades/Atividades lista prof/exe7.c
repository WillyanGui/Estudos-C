#include <stdio.h>
#include <string.h>

void sub(char *str, char c) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            str[i] = ' ';
        }
    }
}

int main() {
    char str[100], c;
    printf("Digite um texto: ");
    fgets(str, 100, stdin); // lê uma string do teclado
    printf("Digite o caractere que deseja substituir: ");
    scanf("%c", &c);
    sub(str, c);
    printf("Texto modificado: %s\n", str);
    return 0;
}
