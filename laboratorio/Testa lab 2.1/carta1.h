#ifndef carta1.h
#define carta1.h

#include <time.h>

typedef struct 
{
    int valor;
    char naipe;
}Carta;


void *compracarta(int *compra, char *naipe);
//void imprimecarta(char Carta);
#endif