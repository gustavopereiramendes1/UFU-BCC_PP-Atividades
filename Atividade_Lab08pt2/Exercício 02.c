#include <stdio.h>

int main(){
    float vet[3][3], *p;

    p = &vet[0][0];
    for(int i = 0; i < 9; i++){
        printf("Endereco: %p\n" , p+i);
    }
    return 0;
}