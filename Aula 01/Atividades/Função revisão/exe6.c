#include<stdio.h>

float media(float nota[5]){
    float soma = 0;
    int j=0;
    for (j = 0; j < 5; j++)
    {
         printf("Nota [%d] : ",j);
            scanf("%f",&nota[j]);
            soma+=nota[j];
    }
    return soma/5;

    
}
int main()
{
    float nota[5];
    int i;
    float media_aluno;
    for ( i = 0; i < 9; i++)
    {
        printf("As notas do aluno %d \n", i+1);
        media_aluno = media(nota);
        printf("media do aluno foi de %.2f\n",media_aluno);
        if (media_aluno>=60)
        {
            printf("\naluno aprovado\n");
        }
        else{
            printf("\naluno reprovado\n");
        }  
    }
    
    {
        /* code */
    }
    


    return 0;
}
