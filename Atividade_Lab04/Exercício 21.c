#include <stdio.h>

void imprima_esclama(int num);

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d" , &num);

    imprima_esclama(num);

    return 0;
}
void imprima_esclama(int num){
    int i, j;

    for(i = 0; i < num; i++){
        for (j = 0; (j < i) || (j == i); j++)
        {
            printf("!");
        }
        printf("\n");
    }
}