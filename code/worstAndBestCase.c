#include <stdio.h>

int search(int v[], int n, int num){
    int resposta = -1;
    for(int i = 0;i < n; i++){
        if(v[i] == num){
            resposta = i;
            break;
        }
    }
    return resposta;
}

int main(void){
    return 0;
 }

