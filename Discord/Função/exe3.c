#include<stdlib.h>
#include<math.h>
#include<stdio.h>

void bhaskara(int a, int b, int c){
    int conta=0, raiz=0;
    conta= b*b-4*a*c;
    raiz=sqrt(conta);
    printf("Conta = %d, raiz = %d",conta,raiz);

}


int main()
{
    int x1,x2,x3;
    printf("escolha os valor de x1 : \n");
    scanf("%d",&x1);
    printf("escolha os valor de x2 : \n");
    scanf("%d",&x2);
    printf("escolha os valor de x3 : \n");
    scanf("%d",&x3);
    bhaskara(x1,x2,x3);
    return 0;
}
