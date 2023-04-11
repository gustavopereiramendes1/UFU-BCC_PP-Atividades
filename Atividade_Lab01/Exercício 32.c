#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, suctriplo, antdobro , resultado;
    printf("Digite um numero inteiro: ");
    scanf("%d" , &numero);
    suctriplo = numero * 3 + 1;
    antdobro = numero * 2 - 1;
    resultado = antdobro + suctriplo;
    printf("\nA soma do sucessor de seu triplo com o antecessor de seu dobro eh: %d\n" ,resultado);
    return 0;
}
