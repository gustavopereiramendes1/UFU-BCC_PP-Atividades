#include <stdio.h>
#include <stdlib.h>

int main()
{
    float polegadas, centimetros;
    printf("Digite o comprimento em polegadas: ");
    scanf("%f" , &polegadas);
    centimetros = polegadas * 2.54;
    printf("O comprimento em centimetros eh: %.2f\n" , centimetros);
    return 0;
}
