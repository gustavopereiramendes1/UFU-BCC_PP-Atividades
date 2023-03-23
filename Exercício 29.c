#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1,x2,x3,x4, mediaAritmetica;
    printf("Digite o primeiro valor: ");
    scanf("%f" , &x1);
    printf("Digite o segundo valor: ");
    scanf("%f" , &x2);
    printf("Digite o terceiro valor: ");
    scanf("%f" , &x3);
    printf("Digite o quarto valor: ");
    scanf("%f" , &x4);

    mediaAritmetica = (x1 + x2 + x3 + x4)/4;
    printf("A media aritmetica dos valores eh: %.3f\n" ,mediaAritmetica);
    return 0;
}
