#include<stdio.h>
int main()
{
    int i=1;

    for ( i = 0; i < 10; i++)
    {
        //printf("%d ", i);
        if (i==5)
        {
            //break;
            continue; // forçando a cancelar a impressão no numero 5.
        }
        printf("%d ", i);
    }
    
    return 0;
}
