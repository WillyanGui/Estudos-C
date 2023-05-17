#include<stdio.h>
#include<stdlib.h>

int teste(int a){
    if (a>0)
    {
        printf("é positivo");
    }
    else{
        printf("é negativavo");
    }
    if (a==0){
        printf("o numero é neutro");

    }

}

int main()
{
    int volta=0;
    puts("escolha um valor");
    scanf("%d",&volta);
    teste(volta);
    return 0;
}
