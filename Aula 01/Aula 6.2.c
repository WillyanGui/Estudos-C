#include<stdio.h>

int main()
{
    char s[10];
    printf("Scanf convencional : ");
    scanf("%s", s); //
    fflush(stdin);

    printf("Resultado : %s\n\n");

    printf("digite algo (scanf convecional) \n");
    scanf("%9[^\n]s", s); // scanf aprimorado
    fflush(stdin);

    printf("resutado : %s\n\n");
    return 0;
}
