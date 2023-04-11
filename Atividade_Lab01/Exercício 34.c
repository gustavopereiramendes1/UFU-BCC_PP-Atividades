#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592        //define uma constante

int main()
{
    float raio, area;
    printf("Digite o valor do raio do circulo: ");
    scanf("%f" ,&raio);
    area = (pow(raio,2)) * PI;
    printf("O valor da area do circulo eh: %.3f\n" , area);
    return 0;
}
