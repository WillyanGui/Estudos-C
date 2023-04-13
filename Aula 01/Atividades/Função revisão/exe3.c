#include<stdio.h>
#include<math.h>

int prime(int a){
    int primo=1;
    for (int i = 2; i < sqrt(a); i++)
    {
        if (a % i ==0)
        {
            primo=0;
            break;
        }
        
    }
    
    return primo;

}

int main()
{
    int num;
    printf("Escolha um numero : \n");
    scanf("%d",&num);
    prime(&num);

    if (prime(num))
    {
        printf(" o numero e primo");
    }
    else{
        printf("o numero nao e primo\n");
    }

    return 0;
}
