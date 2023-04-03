#include<stdio.h>
int main()
{
    int n;
    printf("escolha um numero :");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("o numero é par : %d\n",n);
    }
    
    else
    {
        printf("o numero é impar : %d",n);
    }
    

    return 0;
}
