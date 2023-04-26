#include <stdio.h>

int soma_nums(int num1, int num2);

int main(){
    int num1, num2, res;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d" ,&num1);
    printf("Digite outro numero inteiro positivo: ");
    scanf("%d" ,&num2);


    if(num1 != num2){
        res = soma_nums(num1, num2);
        printf("A soma dos N numero entre eles eh: %d" , res);
    }else{
        printf("[ERRO]: Numeros iguais!");
    }
    return 0;
}
int soma_nums(int num1, int num2){
    int soma = 0, i;

    if(num1 < num2){
        for(i = num1 + 1; i < num2; i++){
            soma += i;
        }
    }else{
        for(i = num2 + 1; i < num1; i++){
            soma += i;
        }
    
    }
    return soma;
}