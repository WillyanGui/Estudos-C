#include<stdio.h>
int main()
{
    FILE *paraqr;
    int i;
    srand(time(NULL));
    paraqr=fopen("aleatorio.txt","w");
    if (paraqr==NULL)
    {
        printf("Erro na abertura do arquivo");
        return 1;
    }
    
    for ( i = 0; i < 10; i++)
    {
        fprintf(paraqr, "%d\n", rand() %100);
    }
    fclose(paraqr);
    printf("dados gravados com sucesso");
    return 0;
}
