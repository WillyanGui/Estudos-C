#include<stdio.h> //
int main()
{
    int n, recebepar=0, recebeimpar=0;
    do
    {
        printf("entre com o numero :");
        scanf("%d", &n);

        if (n % 2==0)
        {
            recebepar+=n;
        }
        else
        {
            recebeimpar+=n;
        }
        
        if (n==0)
        {
            break;
        }
    } while (n>=0);
    printf("total par somado par : %d\n", recebepar);
    printf("total impar somado : %d\n", recebeimpar);
    
    return 0;
}
