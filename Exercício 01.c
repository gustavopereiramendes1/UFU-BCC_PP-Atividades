#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;
    printf("Digite um numero: ");
    scanf("%f" , &num1);
    printf("Digite outro numero: ");
    scanf("%f" , &num2);

    if(num1 > num2){
        printf("O maior numero eh: %f" ,num1);
    } else if(num1 == num2){
        printf("Os numero são iguais!");

    } else{
        printf("O maior numero eh: %.2f" ,num2);
    }
    return 0;
}
