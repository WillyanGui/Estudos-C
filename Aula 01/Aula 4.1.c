#include<stdio.h>
int main()
{
    float nota;
    printf("Nota do aluno\n");
    scanf("%f", &nota);
    if (nota>=7)
    {
        printf("Aprovado\n");
    }
    else
        {
            printf("reprovado\n");
        }
    
    return 0;
}
