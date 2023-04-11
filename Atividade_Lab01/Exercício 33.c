#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado, area;
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f" , &lado);
    area = lado * lado;
    printf("A area do quadrado eh: %.2f\n" ,area);
    return 0;
}
