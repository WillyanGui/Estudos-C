#include<stdio.h>
int main()
{
    int n,recebe,i=0;
    float media=0,divisao;

do
{
    printf("escreva o numero : ");
    scanf("%d", &n);
    if (n>0)
        {
        media+=n;
        i++;
        }
    
    
} while (n>=0);
    divisao=(float)media/i;
    printf("soma total foi de  : %.2f", media);
    printf("a media foi de : %.2f", divisao);
}
