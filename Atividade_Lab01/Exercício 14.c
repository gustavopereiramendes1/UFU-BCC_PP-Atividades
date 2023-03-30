#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float PI = 3.141592;              //usando "const" para criar uma variavel que não pode ser alterada, uma constante
    float graus, radianos;
    printf("Digite o angulo em graus: ");
    scanf("%f" , &graus);
    radianos = graus * PI/180;
    printf("O angulo em radianos eh: %f \n" ,radianos);
    return 0;
}
