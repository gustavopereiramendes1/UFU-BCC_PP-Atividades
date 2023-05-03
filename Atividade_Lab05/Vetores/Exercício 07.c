#include <stdio.h>

int main(){
    int valores[6], i,  soma = 0, quant_impares = 0;

    for(i = 0; i < 6; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d" , &valores[i]);
    }
    printf("Os numeros pares sao: ");
    for(i = 0; i < 6 ; i++){
        if(!(valores[i]%2)){
            printf("%d, " ,valores[i]);
            soma += valores[i];
        }
    }
    printf("\nA soma dos numero pares eh: %d\n" , soma);

    printf("Os numeros impares sao: ");
    for(i = 0; i< 6; i++){
        if(valores[i] % 2){
            printf("%d, " , valores[i]);
            quant_impares++;
        }
    }
    printf("\nA quantidade de numeros impares eh: %d" , quant_impares);
    return 0;
}
