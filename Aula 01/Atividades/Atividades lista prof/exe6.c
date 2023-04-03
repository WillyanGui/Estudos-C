#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void ponteiros(float *a, float *b){
    float temp = *a;
    *a=*b;
    *b=temp;

}




int main()
{
    float x,y,z;
    printf("escolha o valor de x : ");
    scanf("%f",&x);
    printf("escolha o valor de y : \n");
    scanf("%f",&y);
    printf("valor x %.2f de e de y %.2f \n",x,y);
    ponteiros(&x,&y);
    printf("depois da troca x =%.2f e y %.2f \n", x,y);
    return 0;
}
