#ifndef carta.c
#define carta.c

#include <time.h>
#define MAX_CARTAS 52

typedef struct
{
    int valor;
    char naipe
}Carta;


void inicializa(Carta *carta, int valor, char naipe);
void compracarta(Carta *carta);
void imprimecartasimples(Carta carta);
void imprecartaASCII(Carta carta);


#endif