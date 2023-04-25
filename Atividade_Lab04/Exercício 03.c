#include <stdio.h>

int verifica_num(int num1);

int main(){
    float num1;  
    printf("Digite um numero: ");
    scanf("%f", &num1);

    
    switch (verifica_num(num1)){
    case 0:
        printf("O numero eh 0. ");
        break;
    case 1:
        printf("O Numero %.2f eh positivo." ,num1);
        break;
    case -1:
        printf("O Numero %.2f negativo." , num1);
        break;
    
    default:
        printf("[ERRO]Numero Invalido!");
        break;
    }
    
    return 0;
}
int verifica_num(int num1){
    if(num1 > 0){
        return 1;
    }else if (num1 < 0)
    {
        return -1;
    }else{
        return 0;
    }
    
}