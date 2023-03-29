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
        printf("\nO maior numero eh %d\n" , num1);
    }else if(num1 == num2){
        printf("\nNumeros iguais!\n");
    }else{
        printf("\nO maior numero eh %d \n" ,num2);
    }

    return 0;
}
