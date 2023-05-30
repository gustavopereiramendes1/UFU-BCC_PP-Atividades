#include <stdio.h>

int main(){
    float vet[10], *p;

    p = &vet[0];
    for(int i = 0; i < 10; i++){
        printf("Endereco: %p\n" , p+i);

    }
    return 0;
}