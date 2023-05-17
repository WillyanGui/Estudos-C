#include<stdio.h>
#include<stdlib.h>

typedef struct retangulo
{
    int largura;
    int altura;
    int area;
}vretangulo;

int array(vretangulo *calculo){
    int soma;
        for (int i = 0; i < 3; i++)
        {
            soma = calculo->altura*calculo->area;
        }
    



}




int main()
{
    int n=3, volta;
    vretangulo l;
    volta=l=malloc(n*sizeof(int));
    return 0;
}

