#include <stdio.h>
int main()
{
    int numero,maior,menor,menor1,i;
    printf("escolha um numero1 : ");
    scanf("%d", &numero);
    maior=numero;
    menor=numero;
    for (i = 2; i < 5; i++)
    {
        printf("escolha um numero : ");
        scanf("%d", &numero);
        if (numero>maior)
        {
            maior=numero;
        }
        if (numero<menor)
        {
            menor1=numero;
        }
        

        
    }
    printf("o maior numero foi : %d \n", maior);
    printf("o menor numero foi : %d \n", menor);
    
    return 0;
}
