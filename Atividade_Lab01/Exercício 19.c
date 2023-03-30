#include <stdio.h>
#include <stdlib.h>

int main()
{
    float litros, m3;
    printf("Digite o volume em litros: ");
    scanf("%f", &litros);
    m3 = litros/1000;
    printf("O volume em metros cubicos eh: %.2f\n" , m3);
    return 0;
}
