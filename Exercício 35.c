#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float caa, cab, hipo;
    printf("Digite um dos catetos do triangulo: ");
    scanf("%f" ,&caa);
    printf("Digite o outro cateto do triangulo: ");
    scanf("%f" ,&cab);
    hipo = sqrt(pow(caa, 2) + pow(cab, 2));             //sqrt() � uma fun��o que calcula a raiz quadrada do valor dentro do parentese
    printf("A hipotenusa desse triangulo eh: %.2f\n" , hipo);   //pow(x,y) � uma fun��o que calcula a pontencia, na qual x � a base e y � o expoente
    return 0;
}
