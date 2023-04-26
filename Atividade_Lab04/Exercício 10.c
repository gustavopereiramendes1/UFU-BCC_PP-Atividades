#include <stdio.h>

float maior(float num1, float num2);

int main(){
    float num1, num2;
    printf("Digite um numero: ");
    scanf("%f" , &num1);
    printf("Digite outro numero: ");
    scanf("%f" , &num2);

    printf("O numero %.2f eh o maior" , maior(num1, num2));
    return 0;
}
float maior(float num1, float num2){
    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }
}
