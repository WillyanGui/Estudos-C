#include<stdio.h>

float fahrenheitparacelsius(float a){
    float soma;
    soma=(a-32)/1.8;
    return soma;
}
float fahrenheitparakelvin(float a){
    float soma;
    soma=(a+459.67)*5/9;
    return soma;
}
float celsiusparaFahrenheit(float a){
    float soma;
    soma = (a*9/5)+32;
    return soma;
}


int main()
{
    int painel;
    float temp,calculo;
    printf("Temos as seguintes conversoes");
    printf("\n");
    puts("1.Fahrenheit para Celsius");
    puts("2.Fahrenheit para Kelvin");
    puts("3.Celsius para Fahrenheit");
    puts("4.Celsius para Kelvin");
    puts("5.Kelvin para Fahrenheit");
    puts("6.Kelvin para Celsius");
    printf("Escolha qual conversao deseja fazer : ");
    scanf("%d", &painel);
    switch (painel)
    {
    case 1:
        printf("Qual temperatura? :");
        scanf("%f", &temp);
        fahrenheitparacelsius(temp);
        printf("A temperatura em fahrenheit e de %.2f", fahrenheitparacelsius(temp));
        break;
    case 2:
        printf("Qual temperatura? :");
        scanf("%f", &temp);
        fahrenheitparakelvin(temp);
        printf("A temperatura em kelvin e de %.2f", fahrenheitparakelvin(temp));
        break;
    case 3:
        printf("Qual temperatura? :");
        scanf("%f", &temp);
        celsiusparaFahrenheit(temp);
        printf("A temperatura em fahreint e de %.2f : ", celsiusparaFahrenheit(temp));

    default:
        break;
    }
    return 0;
}
