#include<stdio.h>
int main()
{
    int segundos,horas,minutos;
    printf("digite o tempo em segundos : ");
    scanf("%d", &segundos);
    horas=segundos/3600;
    minutos=segundos/60;
    printf("o total de segundos digitado foi de %d\n", segundos);
    printf("Horas : %d \n", horas);
    printf("minutos : %d\n", minutos);
    return 0;
}
