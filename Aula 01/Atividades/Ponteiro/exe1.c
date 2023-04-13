#include<stdio.h>

int main( )
{
   int x;
   x = 10;
   int y = x;
   int x = 20;

   printf("%d %d", x,y);

    int *ponteiro;

    ponteiro=&x;

    printf("%i\n", ponteiro); // acessa o endereço de memoria
    puts("");
    printf("%i\n", *ponteiro); //acessa o valor da memoria
    return 0;
}



// & = acessa o endereço da memoria
// 