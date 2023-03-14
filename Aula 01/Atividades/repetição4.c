#include<stdio.h>
int main()
{
    int n,normal=0,nulo=0,branco=0,soma;
    do
    {
    printf("indique seu voto : ");
    scanf("%d",&n);
    switch (n)
        {
        case 1 ... 4:
            normal++;
            break;
        case 5:
            nulo++;
            break;
        case 6:
            branco++;
            break;
        }
    if (n==0)
    {
        break;
    }
    
    } while (n>=0);
    
    soma=normal+nulo+branco;
    
    printf("total de votos normais : %d \n", normal);
    printf("total de votos nulo : %d \n", nulo);
    printf("total de votos branco : %d \n", branco);
    printf("total de votos : %d \n", soma);
}
