#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n1 , n2, n3, n4, media , soma;
    printf("Informe o primeiro numero : \n");
    scanf("%d",&n1);
    printf("Informe o primeiro segundo : \n");
    scanf("%d",&n2);
    printf("Informe o primeiro terceiro : \n");
    scanf("%d",&n3);
    printf("Informe o primeiro quarto : \n");
    scanf("%d",&n4);
    soma= n1+n2+n3+n4;
    media= soma/2;
    printf("A soma dos numeros e : %d\nE a media e : %d", soma, media);

    return 0;
}
