#include<stdio.h>
int main(int argc, char const *argv[])
{
    float n1, n2, n3 ,nota, media, exame, mediafinal;
    printf("Nota n1 : \n ");
    scanf("%f", &n1);
    printf("nota n2: \n");
    scanf("%f", &n2);
    printf("nota n3 :\n");
    scanf("%f", &n3);
    media = (n1+n2+n3)/3;

    if (media>=7)
    {
        printf("Aprovado");
    }
    else if (media>=7 && media<7)
    {
        printf("voce esta em exame\n");
        printf("nota do exame\n");
        scanf("%f", &exame);
        mediafinal= (media+exame)/2;

            if (mediafinal>=5)
            {
            printf("aprovado no exame\n");
            }
                else
                {
                    printf("reprovado no exame\n");
                }
            if (media<3)
            {   
            printf("reprovado sem direito a exame");
            }
    


    }
    
    

    return 0;
}
