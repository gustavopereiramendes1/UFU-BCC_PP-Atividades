#include <stdio.h>
#include <stdlib.h>

int main()
{
    float centimetros, polegadas;
    printf("Digite o comprimento em centimetros: ");
    scanf("%f" ,&centimetros);
    polegadas = centimetros/2.54;
    printf("O comprimento em polegadas eh: %.2f \n" , polegadas);
    return 0;
}
