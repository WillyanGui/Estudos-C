#include<stdio.h>
int main(int argc, char const *argv[])
{
    float metros, decimetros, centimetros, milimetros;
    printf("Me informe quantos metros ");
    scanf("%f", &metros);
    decimetros=(metros*10);
    centimetros=(metros*100);
    milimetros=(metros*1000);

    printf("metros = %.2f\n", metros);
    printf("decimentros = %.5f\n",decimetros);
    printf("centimetros = %.5f\n", centimetros);
    printf("milimetros = %.5f\n",milimetros);
    return 0;
}
