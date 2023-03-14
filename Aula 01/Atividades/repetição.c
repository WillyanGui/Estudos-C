#include<stdio.h>
int main()
{
    int negativo=0,n1,n5=0;

    do
    {
        printf("digite 5 numeros\n");
        scanf("%d",&n1);
        n5++;
        if (n1<0)
        {
            negativo++;
        }
        
    } while (n5<=5);
    
    printf("numeros digitados : %d\n ",n1);
    printf("quantidade de numeros negativos: %d ",negativo);
    return 0;
}
