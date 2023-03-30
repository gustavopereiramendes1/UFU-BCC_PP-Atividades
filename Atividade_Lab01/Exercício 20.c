#include <stdio.h>
#include <stdlib.h>

int main()
{
    float quilo, libras;
    printf("Digite a massa em quilogramas: ");
    scanf("%f" , &quilo);
    libras = quilo/0.45;
    printf("A massa em libras eh: %.2f \n" , libras);
    return 0;
}
