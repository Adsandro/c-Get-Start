#include <stdio.h>
#include <stdlib.h>


typedef struct no{
    int valor;
    struct no* proximo;
}No;

No* inicia(){
    return NULL;
}

No* insere(int num, No* lista){
    No* novo_no = (No*) malloc(sizeof(No));
    novo_no->valor = num;
    novo_no->proximo = lista;
    return novo_no;
}

No* a(int num, No* lista){
    No* anterior = NULL;
    No* atual = lista;

    while (atual != NULL) {
        if (atual->valor == num) {
            // Verifica se o n� a ser removido � o primeiro n� da lista
            if (anterior == NULL) {
                lista = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }

            // Libera a mem�ria alocada para o n� a ser removido
            free(atual);
            return lista; // Retorna a lista atualizada
        }

        anterior = atual;
        atual = atual->proximo;
    }

    // Se o valor n�o foi encontrado na lista, retorna a lista original
    return lista;
}

void printar(No* lista){
    for(lista; lista; lista=(*lista).proximo){
        printf("%d", lista->valor);
    }
}


int main(){
    No* lista;
    lista = inicia();
    lista = insere(10, lista);
    lista = insere(20, lista);
    lista = insere(30, lista);
    lista = insere(40, lista);
    printar(lista);
    lista = a(30, lista);
    printf("\n");
    printar(lista);

    return 0;
}
