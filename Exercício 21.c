#include <stdio.h>
#include <stdlib.h>

int main()
{
    float quilo, libras;
    printf("Digite a massa em libras: ");
    scanf("%f" , &libras);
    quilo = libras * 0.45;
    printf("A massa em quilograma: %.2f\n" , quilo);
    return 0;
}
