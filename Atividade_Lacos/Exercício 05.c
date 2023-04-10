#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float num1, soma;
    int i;
    
    for (i = 0; i < 10; i++)
    {
        printf("\nDigite um valor: ");
        scanf("%f" ,&num1);
        soma += num1;
    }
    printf("\nO resultado eh: %.2f" , soma);
    return 0;
}