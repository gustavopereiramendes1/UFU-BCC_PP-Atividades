#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km, milhas;
    printf("Digite a distancia em quilometros: ");
    scanf("%f" , &km);
    milhas = km/1.61;
    printf("A distancia em milhas eh: %f\n" , milhas);
    return 0;
}
