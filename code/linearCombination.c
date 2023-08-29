#include <stdio.h>

int fat(int n){
    int index = 1;
    if (n > 0){
        for(int i = 1;i <= n; i++){
            index = index*i;
        };
    }
    return index;
}

int combination(int a, int b){
    int index = 0;
    index = (fat(a))/((fat(b))*(fat(a-b)));
    return index;
}

void main(){
    int comb = combination(5, 2);
    printf("%d", comb);

}
