#include <stdio.h>
int main(int argc, char const *argv[])
{
    float nota;
    printf("Nota do aluno :\n");
    scanf("%f", &nota);
    if (nota>=3.5)
    {
        printf("Aprovado");
    }
        else // não existe else sem if antes
        {  
        printf("Reprovado");
        }
    
    return 0;
}
