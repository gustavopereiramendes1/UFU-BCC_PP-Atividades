#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num1, raiz, quadrado;
    printf("Digite um numero: ");
    scanf("%f" , &num1);
    if(num1 > 0 ){
        raiz = sqrt(num1);
        printf("A raiz quadrada do numero eh: %.2f" ,raiz);
    }else{
        quadrado = pow(num1, 2);
        printf("O quadrado do numero eh: %.2f" ,quadrado);
    }


    return 0;
}
