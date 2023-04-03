#ifndef carta1.h
#define carta1.h

#include <time.h>

typedef struct 
{
    int valor;
    char naipe;
}Carta;

void inicializa(Carta *carta, int valor , char naipe);

#endif