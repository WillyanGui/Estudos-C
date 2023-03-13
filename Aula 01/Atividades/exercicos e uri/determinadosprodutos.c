#include <stdio.h>

int main()
{
    int codigo;
    printf("escolha um codigo de 1 a 10 : ");
    scanf("%d",&codigo);
    if (codigo==1)
    {
        printf("alimento nao perecivel");
    }
    else if (codigo>=2 || codigo<=4)
    {
        printf("alimento perecivel");
    }
    else if (codigo==5 || codigo==6)
    {
        printf("higiene pessoal");
    }
    else if (codigo==7)
    {
        printf("higiene pessoal");
    }
    else if (codigo>8 || codigo<=10)
    {
        printf("utensilios domesticos");
    }
    else
    {
        printf("codigo invalido");
    }
    

     return 0;
 }


