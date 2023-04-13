#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void *tamanho(int n){
    int *array= malloc(n*sizeof(int));
    int anterior=0, sucessor=0;
    if (array==NULL)
    {
        printf("deu errado a alocação");
        exit(1);
    }
    for (int i = 0; i < n; i++){
    
        printf("escolha o valor do array %d :", i);
        scanf("%d", &array[i]);
        if (array[i]>sucessor)
        {
            anterior=sucessor;
            sucessor=array[i];
        }
        else if (array[i]>anterior)
        {
            anterior=array[i];
        }
    }
    printf("o maior numero foi %d : ", sucessor);
    return array;
}
int main()
{
    int n;
    printf("escolha o tamanho do array : ");
    scanf("%d", &n);
    int *array=tamanho(n);
    free(array);
    return 0;
}

