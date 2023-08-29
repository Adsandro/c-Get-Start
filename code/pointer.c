#include <stdio.h>

void valueExchange(int a, int b){
        int temp;
        temp = a;
        a = b;
        b = temp;
}

void referenceExchange(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int aritmeticWithPointer(){
    int i;
    int *p = &i;
    printf("Endereco em p: %x \n", p);
    printf("Endereco em p+1: %x \n", p+1);
    printf("Endereco em p+2: %x \n", p+2);
}

int genericPointer(){
    void *pp;
    int *p1, p2 = 10;
    p1 = &p2;
    pp = &p2;
    printf("Endereco em pp: %p \n", pp);
}

void main(){
    int a=7;
    int b=4;
    valueExchange(a, b);
    printf("Troca por valor: \n valor de A: %d \n Valor de B: %d \n Nao houve auteracao \n", a, b);

    referenceExchange(&a, &b);
    printf("\n Troca por referencia: \n valor de A: %d \n Valor de B: %d \n", a, b);

    printf("\n");
    aritmeticWithPointer();

    printf("\n");
    genericPointer();
}
