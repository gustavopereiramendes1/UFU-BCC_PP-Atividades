#include <stdio.h>




int main(){
    int qnt = 10, vet[qnt], i, j, cont = 0;

    for(i = 0; i < qnt; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d" , &vet[i]);
    }
    for(i = 0; i < qnt; i++){
        for(j = 1; (j < vet[i])|| j == vet[i]; j++){
            if(!(vet[i] % j)){
                cont++;
            }
        }
        if(cont == 2){
                printf("O numero %d na posicao: %d\n" , vet[i] , i+1);
        }
        cont = 0;
    }
    
    return 0;
}
