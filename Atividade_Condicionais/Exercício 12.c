#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1; 
    float loga;
    printf("Digite um numero inteiro: ");
    scanf("%d" , &num1);

    if(num1< 0){
        printf("Numero Invalido!");
    }else{
        loga = log10(num1);
        printf("O logaritmo desse numero eh: %f" ,loga);
    }
    return 0;
}
