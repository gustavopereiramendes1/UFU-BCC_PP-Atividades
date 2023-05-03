#include <stdio.h>

int main(){
    int num[6] = {1, 0, 5, -2, -5, 7}, soma = 0, i;

    soma = num[0] + num[1] + num[5];

    printf("A soma dos valores eh: %d\n" , soma);
    num[4] = 100;

    for(i = 0; i < 6; i++){
        printf("%d\n", num[i]);
    }
    return 0;
}
