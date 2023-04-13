#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include "carta.h"

void *inicializa(Carta *carta, int valor, char naipe){
   carta->valor = valor;
   carta->naipe = naipe;
}

void *compracarta(Carta *carta){
    int j = 0;
    int i = rand() %4;
    char naipes[] = {'C','E','P','O'};
    carta->valor = rand()%13;
    carta->naipe = naipes[i];
}




void imprimecarta(Carta *carta){
    printf("Valor: %d, Naipe: %c\n", carta->valor, carta->naipe);
}
    
