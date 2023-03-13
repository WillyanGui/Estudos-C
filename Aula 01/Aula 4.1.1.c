#include<stdio.h>
int main()
{
      float nota;
    printf("Nota do aluno\n");
    scanf("%f", &nota);
    if (nota>=4 && nota<7) // logica para igualdade && (E) 
    {
        printf("Tem direito ao exame final\n");
    }
    else
        {
            printf("reprovado\n");
        }
    
    return 0;
}
