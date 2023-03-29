#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y , z, soma;
    printf("Digite um valor: ");
    scanf("%d" , &x);
    printf("Digite outro valor: ");
    scanf("%d" , &y);
    printf("Digite mais um valor: ");
    scanf("%d" , &z);
    soma = x + y + z;
    printf("A soma dos valores digitados eh: %d" , soma);
    return 0;
}
