#include <stdio.h>

int main(){
    int vet[5], num, *p = &vet[0];

    printf("Digite um valor: ");
    scanf("%d" , &num);

    for(int i = 0; i < 5; i++){
        *(p+i) = num;
    }
    for(int i = 0; i < 5; i++){
        printf("Valor: %d, Endereco: %p\n", *(p+i), p+i);
    }
    return 0;
}