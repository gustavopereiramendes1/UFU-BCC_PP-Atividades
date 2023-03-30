#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m3, litros;
    printf("Digite o volume em metros cubicos: ");
    scanf("%f" , &m3);
    litros = m3 * 1000;
    printf("O volume em litros eh: %.2fL\n" , litros);
    return 0;
}
