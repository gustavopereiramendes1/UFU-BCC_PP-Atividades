#include <stdio.h>
#include <math.h>

int main(){
    int num1, soma = 0, i;
    float media;
    for (i = 0; i < 10; i++)
    {
        printf("\nDigite um valor: ");
        scanf("%d" ,&num1);
        if (num1 <= 0)
        {
            printf("Numero Invalido!");
            i--;
        }else{
            soma += num1;
        }
    }
    media = soma/10;
    printf("\nO resultado eh: %.2f\n " , media);
    return 0;
}