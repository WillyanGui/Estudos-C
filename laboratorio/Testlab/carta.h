#ifndef carta_h
#define carta_h

#include <time.h>

typedef struct carta
{
    int valor;
    char naipe;
}Carta;

void *inicializa(Carta *carta, int valor, char naipe);
void *compracarta(Carta *carta);
void imprimecarta(char Carta);

#endif