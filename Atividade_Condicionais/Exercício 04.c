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
        quadrado = pow(num1, 2);
        printf("\nO numero digitado ao quadrado eh: %.2f\n" ,quadrado);
        printf("A raiz quadrada do numero digitado  eh: %.2f\n" ,raiz);
    }
    return 0;
}
