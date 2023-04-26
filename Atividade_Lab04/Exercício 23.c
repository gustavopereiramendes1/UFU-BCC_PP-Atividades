#include <stdio.h>

void imprima_estrela(int num);

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d" , &num);

    imprima_estrela(num);

    return 0;
}
void imprima_estrela(int num){
    int i, j;

    for(i = 0; i < num; i++){
        for (j = 0; (j < i) || (j == i); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i = 1; i < num; i++){
        for (j = num; (j > i); j--)
        {
            printf("*");
        }
        printf("\n");
    }
}