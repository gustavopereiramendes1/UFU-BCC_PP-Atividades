#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float v1,v2,v3, somaquadrado;
    printf("Digite um valor: ");
    scanf("%f" , &v1);
    printf("Digite outro valor: ");
    scanf("%f" , &v2);
    printf("Digite mais um valor: ");
    scanf("%f" , &v3);

    somaquadrado = pow(v1,2) + pow(v2,2) + pow(v3,2);
    printf("A soma dos quadrados dos valores eh: %.2f\n" ,somaquadrado);
    return 0;
}
