#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    const float origem_x = 0, origem_y = 0;
    float co_x, co_y, distancia;
    printf("Digite as coordenadas. \nex.(2,2) : ");
    scanf("%f,%f" ,&co_x,&co_y);
    distancia = sqrt(pow(co_x,2) + pow(co_y,2));
    printf("A distancia do ponto ate a origem eh: %f" , distancia);
    return 0;
}
