#include <stdio.h>
#include <stdlib.h>

int codeWithMalloc(){
    char *nome;
    /*O Malloc é utilizado para alocar espaço de momória,
    ja o sizeof para retornar quando de memória possui um
    tipo de variavel, nesse caso estamos pedindo para reservar
    10 espaços de memória para que caibam caracteres*/

    nome = (char *) malloc(10 * sizeof(char));
    printf("Entre com um nome: ");
    fgets(nome, 10, stdin);
    printf("\n %s \n", nome);

    /*Utilizando free() eu posso liberar espaço na memoria,
    levando em conta que a variavel nome ja foi utilizada.*/

    free(nome);
    return 0;
}
int main(){
    codeWithMalloc();
}
