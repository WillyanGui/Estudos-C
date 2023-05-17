#include<stdlib.h>
#include<stdio.h>


typedef struct ref
{
    int *ref1;
    int *ref2;
    int *ref3;
}referencias;


int main()
{
    referencias l;
    l.ref1=malloc(sizeof(int));
    l.ref2=malloc(sizeof(int));
    l.ref3=malloc(sizeof(int));
    *(l.ref1)=1;
    *(l.ref2)=2;
    *(l.ref3)=3;
    puts("Valores estaticos");
    printf("ref 1 = %d, ref 2 = %d, ref 3 = %d\n",*l.ref1,*l.ref2,*l.ref3);
    // b 
    referencias *ls=malloc(sizeof(referencias));
    ls->ref1 = malloc(sizeof(int));
    ls->ref2 = malloc(sizeof(int));
    ls->ref3 = malloc(sizeof(int));
    *(ls->ref1)= 0;
    *(ls->ref2)= 0;
    *(ls->ref3)= 0;

    
    //c
    int a = 10, b = 20 , c =30;
    (l.ref1)=&a;
    (l.ref2)=&b;
    (l.ref3)=&c;
    printf("%d, %d, %d",(l.ref1),(l.ref2),(l.ref3));
    return 0;
}
