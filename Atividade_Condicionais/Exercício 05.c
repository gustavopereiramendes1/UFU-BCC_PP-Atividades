#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, x;
    printf("Digite um numero inteiro: ");
    scanf("%d" ,&num1);
    x = num1%2;
    if(x==0){
        printf("\nO numero %d eh par!\n" ,num1);
    }else{
        printf("\nO numero %d eh impar!\n" ,num1);
    }
    return 0;
}
