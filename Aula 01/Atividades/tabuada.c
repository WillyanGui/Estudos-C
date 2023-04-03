#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=0, j=0, k=0, entrada[9],soma[9];    
    for ( i = 0; i < 9; i++)
    {
        printf("Tabuada do %d:\n", i);
        
        for ( j = 0; j<=10; j++)
        {
            printf("%d X %d = %d\n",i,j,i*j);
        }
          printf("\n");   
    }

    return 0;
}
