#include<stdio.h>

float media(float a){
    float soma=0;
    soma+=a;
    
    return soma;
}


int main()
{
    float a;
    int i;
    
    for ( i = 1; i < 4; i++)
    {
        printf("Digite a nota do aluno");
        scanf("%f", &a);
        media(a);
    }
    printf("a media do aluno foi de %.2f", media(a));
    return 0;
}
