#include <stdio.h>


int main(){
    int vet[5], *p;
    p = &vet[0];
    for(int i = 0; i < 5; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d" , p+i);
        printf("O dobro do numero eh: %d\n" , *(p+i)*2);
    }
    return 0;
}