#include <stdio.h>
#include <stdlib.h>

void withoutPointer(){
printf("Utilizando array: \n");
int v[5] = {1,2,3,4,5};
int *p = v;
    for(int i = 0; i < 5; i++){
        printf("%d", p[i]);
    };
}

void withPointer(){
printf("Utilizando ponteiro: \n");
int v[5] = {1,2,3,4,5};
int *p = v;
    for(int i = 0; i < 5; i++){
        printf("%d", *(p+i));
    }
}

void incrvetor (int n, int *v){
    printf("Incrementa vetor: \n");
    int i;
    for(i = 0; i < n; i++){
        v[i]++;
    }
}

void main(){
    withoutPointer();
    printf("\n");
    withPointer();
    printf("\n");

    int a[] = {1, 3, 5};
    incrvetor(3, a);
    printf("%d %d %d \n", a[0], a[1], a[2]);
}
