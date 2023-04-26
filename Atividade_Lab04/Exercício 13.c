#include <stdio.h>

float op_num(float num1, float num2, char simb);

int main(){
    float num1, num2;
    char simb;

    printf("Digite um numero: ");
    scanf("%f" , &num1);
    printf("Digite a operacao desejada: ");
    scanf(" %c" ,&simb);
    printf("Digite outro numero: ");
    scanf("%f" , &num2);
    
    if(simb == '/' && num2 == 0){
        printf("[ERRO]: Divisor invalido!");
        return 0;
    }else{
        printf("O resultado eh: %.2f" , op_num(num1, num2, simb));
    }
    
    return 0;
}
float op_num(float num1, float num2, char simb){
    float res;

    switch(simb){
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            res = num1 / num2;
            break;
        default:
            printf("[ERRO]: Simbolo operacional invalido!");
            break;
    }
    return res;
}
