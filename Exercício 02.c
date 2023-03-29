#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num1, raiz;
    printf("Digite um numero: ");
    scanf("%f" , &num1);
    if(num1 > 0 ){
        raiz = sqrt(num1);
        printf("A raiz quadrado do numero eh: %.2f" ,raiz);
    }else{
        printf("\nNUMERO INVALIDO!\n");
    }


    return 0;
}
