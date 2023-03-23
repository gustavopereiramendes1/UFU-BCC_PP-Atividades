#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float PI = 3.141592;     //constante, valor não pode ser alterado
    float graus, radianos;
    printf("Digite o angulo em radianos: ");
    scanf("%f" ,&radianos);
    graus = radianos * 180/PI;
    printf("O angulo em graus eh: %.3f \n" , graus);
    return 0;
}
