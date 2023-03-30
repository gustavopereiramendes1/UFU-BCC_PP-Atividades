#include <stdio.h>
#include <stdlib.h>

int main()
{
    float milhas, km;
    printf("Digite a distancia em milhas: ");
    scanf("%f" , &milhas);
    km = milhas *1.61;
    printf("A distancia em quilometros eh: %f\n" ,km);
    return 0;
}
