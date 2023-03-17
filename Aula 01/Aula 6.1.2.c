#include<stdio.h>
int main()
{
   int v[5];
   int i;
   int pos;
   for (i = 0; i <5; i++)
   {
    printf("Insira um dado : ");
    scanf("%d", &v[i]);
   }
   printf("dados inseridos.\n");

   for ( i = 0; i <5; i++)
   {
        printf("o dado inserido na posicao %d foi %d\n",i, v[i] );
   }
   printf("escola a posicao :");
   scanf("%d", &pos);
   if (pos>=0 && pos<5)
   {
    printf("O dado da posicao %d eh %d\n", pos , v[pos]);
   }
   else{
    printf("Valor invalido");
   }
    return 0;
}
