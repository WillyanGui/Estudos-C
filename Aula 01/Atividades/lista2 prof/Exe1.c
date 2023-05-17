#include <stdio.h>
#include <stdlib.h>

typedef struct informacoes
{
    int mes;
    int dia;
    int ano;
}data;

void recebe(data *data, int mes, int dia, int ano){
    data->ano=2023;
    data->dia=12;
    data->mes=02;
}

int main()
{
    data l;
    int v1,v2,v3;
    recebe(&l,v1,v2,v3);
    printf("%d do %d de %d",(l.dia),(l.mes),(l.ano));
    return 0;
}
