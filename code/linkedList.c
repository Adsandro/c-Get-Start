#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no* proximo;
}No;

No* inicia(){
    return NULL;
}

No* insere(No* lista, int num){
    No* novo_no;
    int tamanho = sizeof(No);
    novo_no = (No*) malloc(tamanho);
    novo_no ->info = num;
    novo_no ->proximo = lista;
    return novo_no;
}

void printLista(No* lista){
    No* current = lista;
    while (lista != NULL){
        printf("%d", (*lista).info);
        lista = lista->proximo;
    }
}

int main(){
    No* lista;
    lista = inicia();
    lista = insere(lista, 10);

    printLista(lista);
    free(lista);

    return 0;
};
