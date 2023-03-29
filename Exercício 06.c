#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2;
    printf("Digite um numero inteiro: ");
    scanf("%d" ,&num1);
    printf("Digite outro numero inteiro: ");
    scanf("%d" ,&num2);

    if(num1>num2){
        printf("\nO maior numero eh %d\nE a diferenca entre eles eh %d\n" ,num1, (num1 - num2));
    }else{
        printf("\nO maior numero eh %d \nE a diferenca entre eles eh %d\n" ,num2, (num2 -num1));
    }

    return 0;
}
