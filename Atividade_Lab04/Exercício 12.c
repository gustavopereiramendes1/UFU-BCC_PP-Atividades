#include <stdio.h>

int somaAlgarismos_num(int num1);

int main(){
    int num1;
    printf("Digite um numero: ");
    scanf("%d" , &num1);

    if(num1 > 0){
        printf("A soma dos algarismos do numero eh: %d" , somaAlgarismos_num(num1));
    }else{
        printf("[ERRO]: Numero Invalido!");
    }
    
    return 0;
}
int somaAlgarismos_num(int num1){
    int soma = 0;

    while(num1 > 0){
        soma += num1 % 10;
        num1 /= 10;
    } 
    
    return soma;
}