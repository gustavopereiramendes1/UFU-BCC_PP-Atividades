#include <stdio.h>

int main(){
    int val[6], i, j;

    for(i = 0; i < 6; i++){
        printf("Digite um valor inteiro: ");
        scanf("%d" , &val[i]);
    }

    for(j = 6; j > 0; j--){
        printf("%d, ", val[j -1]);
    }
    return 0;
}
