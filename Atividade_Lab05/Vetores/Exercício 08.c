#include <stdio.h>

void verifica_existi(int *vet, int i);

int main(){
    int qnt = 10, vet[qnt], i;

    for(i = 0; i < qnt; i++){
        printf("Digite um valor: ");
        scanf("%d" , &vet[i]);

        
        verifica_existi(vet, i);
        
    }
    for(i = 0; i < qnt; i++){
        printf("[%d] " , vet[i]);
    }


    return 0;
}

void verifica_existi(int *vet, int i){
    int j;
    for(j  = 0; j < i; j++){
        if(vet[i] == vet[j]){
            printf("Digite um valor: ");
            scanf("%d" , &vet[i]);
            verifica_existi(vet, i);
        }
    }
}
