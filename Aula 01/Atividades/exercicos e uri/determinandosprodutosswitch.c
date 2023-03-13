#include <stdio.h>
int main()
{
  int codigo;
    printf("escolha um codigo de 1 a 10 : ");
    scanf("%d",&codigo);
    switch (codigo)
    {
    case 1:
        printf("alimento nao perecivel");
        break;

    case 2:
    case 3:
    case 4:
        printf("alimento perecivel");
        break;
    case 5:
    case 6:
        printf("higiene pessoal");
        break;
    case 7:
        printf("higiene pessoal");
        break;
    case 8:
    case 9:
    case 10:
        printf("utencilios domesticos");
        break;
    default:
        printf("codigo não encontrado");
        break;
    }
    return 0;
}
