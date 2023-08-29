#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int numero;
    double saldo;
}contabancaria;

void inicia(contabancaria* conta, int numero, double saldo){
(*conta).numero = numero;
(*conta).saldo = saldo;
}

void deposito(contabancaria* conta, double valor){
(*conta).saldo += valor;
}

void saque(contabancaria* conta, double valor){
(*conta).saldo -= valor;
}

void imprime(contabancaria conta){
printf("Numero: %d \n", conta.numero);
printf("Saldo: %f \n", conta.saldo);
}

int main(){
    printf("Criacao da conta: \n");
    contabancaria conta1;
    inicia(&conta1, 1234, 766);
    imprime(conta1);

    printf("Apos o deposito: \n");
    deposito(&conta1, 123);
    imprime(conta1);

    printf("Apos o saque: \n");
    saque(&conta1, 499);
    imprime(conta1);
}
