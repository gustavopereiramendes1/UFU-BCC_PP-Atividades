#include <stdio.h>


int main(){
    int vet[5], *p;
    p = &vet[0];
    for(int i = 0; i < 5; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d" , p+i);
    }
    for(int i = 0; i < 5; i++){
        if(*(p+i)%2 == 0){
            printf("Endereco do numero %d: %p\n" , *(p+i), p+i);
        }
    }
    return 0;
}