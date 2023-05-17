#include<stdio.h>
#include<stdlib.h>
#include<time.h>

float fibonrecursi(int n){
    if(n==0){
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    return fibonrecursi(n-1)+fibonrecursi(n-2);
}

float fibonacci(int n){
    float primeiro = 0, segundo = 1, proximo;
    for (int i = 0; i <= n; i++) {
    if (i <= 1) {
    proximo = i;
    } else {
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
        }

    }
    return proximo;
}

int main()
{
    double inicio,fim;
    int j;
    int n;
    float valor;
    printf("Escolha qual modo de fibonacci\n");
    printf("\n 1.Interativo\n 2.Recursivo\n");
    scanf("%d",&j);
    switch (j)
    {
    case 1:
        printf("escolha a sequencia a seguir : ");
        scanf("%d", &n);
        inicio=clock();
        valor=fibonacci(n); 
        fim=clock();
        double tempointerativo= (double)(fim-inicio) / CLOCKS_PER_SEC;
        printf(" valor do fibonnaci =  %f\n", valor);
        printf(" tempo de execucao = %lf \n", tempointerativo);
        break;
    case 2:
        printf("escolha a sequencia a seguir : ");
        scanf("%d", &n);
        inicio=clock();
        valor=fibonrecursi(n); 
        fim=clock();
        double temporecursivo= (double)(fim-inicio) / CLOCKS_PER_SEC;
        printf(" valor do fibonnaci =  %f\n", valor);
        printf(" tempo de execucao = %lf \n", temporecursivo);
    break;
    default:
        break;
    }

    return 0;
}

// Recursiva                        | Interativa
// Valor 50 = 12586268672.000000    | valor 50 = 12586268672.000000 
// tempo de exe = 124.714000        | tempo de exe = 0
// valor 40 = 102334152.000000      | valor 40 = 102334152.000000  
// tempo de exe = 1.5130000         | tempo de exe= 0
// Valor 30 = 832040.000000         | valor 30 = 832040.000000 
// tempo de exe = 0.016000          | tempo de exe = 0
// Valor 20 = 6765.000000           | valor 20 = 6765.000000  
// tempo de exe = 0                 | tempo de exe = 0
// Valor 10 = 55.000000             | valor 10 =  55.000000   
// tempo de exe = 0                 | tempo de exe = 0

// A função interativa é a mais rapida em termo de tempo de execução, pois dis cada passo do calculo fatorial do numero e é utilizado um loop que acumula os valores
// enquanto o procedimento recursivo nos mostra como calcular o n baseado no numero menor (n-1);
// Em desempenho podemos dizer que a interativa é a melhor, pois utiliza uma pilha para armazenar os valores.