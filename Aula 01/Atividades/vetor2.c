#include<stdio.h>
int main()
{
    int aluno, n;
    char gabarito[5], resposta[5];
    int acertos;
    int i;
    printf("o numero de alunos >");
    scanf("%d",&n);
    printf("digite o gabarito da prova,\n");
    for ( i = 0; i < 5; i++)
    {
        printf("Respostas gabarito : \n");
        scanf("%c",&gabarito[i]);
    }
   
   for (aluno = 1; aluno <= n; i++)
   {
    acertos=0;
    printf("Digite as respostas do aluno %d", aluno);
    for ( i = 0; i < 5; i++)
    {
        scanf("%c",&resposta[i]);
        if (resposta[i]==gabarito[i])
        {
            acertos=acertos+1;
        }
        
    }
    
   }
   
    printf("O aluno %d fez %d pontos\n", aluno,acertos);
    


    return 0;
}
