#include<stdio.h>
int main()
{
    int maxima,motorista,multa,minimo;
    printf("Velocidade maxima da avenida : ");
    scanf("%d",&maxima);
    printf("velocidade do motorista : \n");
    scanf("%d",&motorista);
    if (motorista>maxima)
    {
        minimo=maxima-motorista;
        multa=abs(minimo*5); // a função abs força o numero a se tornar positivo.
        printf("o motorista estava a %d no maximo de %d a multa foi de = %d\n", motorista,maxima,multa);
    }
    else
    {
        printf("Não ouve multa, o motorista esta na velocidade permitida\n");
    }
    

    return 0;
}
