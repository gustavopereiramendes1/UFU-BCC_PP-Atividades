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
    int i, j, k, espaco = num;

    for(i = 0; i < num; i++){
        for(k = espaco; k > 0; k--){
            printf(" ");
        }
        for (j = 0; (j < (i*2)) || (j == (i*2)); j++){
            printf("*");
        }
        
        printf("\n");
        espaco--;
    }
    
}