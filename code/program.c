#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no {
    char funcionario[50];
    char cargo[50];
    int salario;
    int id;
    struct no* proximo;
} No;

No* inicia() {
    return NULL;
}

No* insere(const char nome[], const char cargo[], int salario, int id, No* lista) {
    No* novo_no = (No*)malloc(sizeof(No));
    strcpy(novo_no->funcionario, nome);
    strcpy(novo_no->cargo, cargo);
    novo_no->salario = salario;
    novo_no->id = id;
    novo_no->proximo = lista;
    return novo_no;
}

void printar(No* lista) {
    for (; lista; lista = lista->proximo) {
        printf("Nome: %s Cargo: %s Salario:%d ID: %d\n", lista->funcionario, lista->cargo, lista->salario, lista->id);
    }
}

No* removeFuncionario(int id, No* lista) {
    No* atual = lista;
    No* anterior = NULL;

    while (atual != NULL) {
        if (atual->id == id) {
            if (anterior == NULL) {
                lista = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }
            free(atual);
            return lista;
        }
        anterior = atual;
        atual = atual->proximo;
    }
    return lista;
}

No* buscaFuncionario(int id, No* lista) {
    No* atual = lista;

    while (atual != NULL) {
        if (atual->id == id) {
            return atual;
        }
        atual = atual->proximo;
    }
    return NULL;
}

int main() {
    No* lista;
    lista = inicia();
    lista = insere("a", "DEV", 1000, 1, lista);
    lista = insere("b", "DEV1", 1500, 2, lista);
    lista = insere("c", "DEV2", 1050, 3, lista);
    lista = insere("d", "DEV3", 1025, 4, lista);
    lista = insere("e", "DEV4", 2000, 5, lista);
    lista = insere("f", "DEV5", 2500, 6, lista);
    lista = insere("g", "DEV6", 950, 7, lista);
    lista = insere("h", "DEV7", 3500, 8, lista);
    lista = insere("i", "DEV8", 1550, 9, lista);
    lista = insere("j", "DEV9", 2550, 10, lista);

    lista = removeFuncionario(2, lista);

    No* encontrado = buscaFuncionario(4, lista);
    if (encontrado != NULL) {
        printf("Funcionario encontrado: %d\n", encontrado->id);
    } else {
        printf("Funcionario nao encontrado.\n");
    }

    printf("\n");
    printar(lista);

    while (lista) {
        No* temp = lista;
        lista = lista->proximo;
        free(temp);
    }
}
