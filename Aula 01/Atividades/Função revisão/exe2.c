#include<stdio.h>

int parimpar(int a){
    if (a %2==0)
    {
        return 0;
    }
    else {
        return 1;
    }


}


int main()
{
    int x,b,c;
    printf("escolha um numero : ");
    scanf("%d",&x);   
    b = parimpar(&x);

}