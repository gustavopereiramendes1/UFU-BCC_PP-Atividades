#include <stdio.h>

int main(){
    int vet[8], i, coordX, coordY, soma;
    for(i = 0; i < 8; i++){
        printf("Digite um valor: ");
        scanf("%d" , &vet[i]);
    }
    printf("Digite um valor x: ");
    scanf("%d" ,&coordX);
    printf("Digite um valor y: ");
    scanf("%d" ,&coordY);

    soma = vet[coordX -1] + vet[coordY -1];
    printf("\nA soma dos valores eh: %d" ,soma);
    return 0;
}
