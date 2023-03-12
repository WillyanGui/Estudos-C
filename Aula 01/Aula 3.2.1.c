#include<stdio.h>
int main()
{
    // decremento e aumento por logica matematica
    int dado=10;
    printf("Dado antes do incremento = %d\n",dado);

    dado++;
    printf("dado depois do incremeto = %d\n",dado);
    
    dado--;
    printf("Dado depois decremento = %d\n", dado);

    dado+=3;
    printf("dado depois de adicionar 3 : %d\n", dado);

    dado-=3;
    printf("dado depois de tirar 3 : %d\n", dado);

    dado*=10;
    printf("dado multiplicado por 10 : %d\n", dado);

    dado/=10;
    printf("dado divido por 10: %d\n", dado);
    return 0;
}
