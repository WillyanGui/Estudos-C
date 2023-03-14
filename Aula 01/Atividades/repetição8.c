#include<stdio.h>
int main()
{
    int valor,somapar=0,somaimpar=0,i=0,mediapar=0,mediatotal=0,j=0,k=0,divisaototal;
    while (valor>0)
    {
    printf("Insira um valor ; ");
    scanf("%d", &valor);
    mediatotal+=valor;
     if (valor %2==0)
            {
                somapar+=valor;
                i++;
            }
    else
        { 
            somaimpar+=valor;
            j++;

        }
     k++;
        if (valor==0)
            {
                break;
            }
    divisaototal=mediatotal/k;
    }
    mediapar=somapar/i;
    printf("total de numeros Pares : %d , total de media par : %d \n",i,mediapar);
    printf("total de numeros impares : %d\n",j);
    printf("media geral dos valores : %d\n", divisaototal);
   
}
