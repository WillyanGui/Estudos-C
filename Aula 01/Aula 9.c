#include<stdio.h>
float maior(float num1, float num2){
    if (num1>num2)
        return num1;
    
    else
        return num2;
    
}
int main()
{
    float x,y,m;
    printf("numero 1 :\n");
    scanf("%f",&x);
    printf("numero 2 :\n ");
    scanf("%f",&y);
    m = maior(x,y);
    printf("o maior numero e %.2f :" , m);
    return 0;
}

