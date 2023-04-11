#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float redor_terreno, c,l, p, custo;

    printf("Digite o comprimento do terreno: ");
    scanf("%f" , &c);
    printf("Digite a largura do terreno: ");
    scanf("%f" ,&l);
    printf("Digite o preco do metro da tela: ");
    scanf("%f" ,&p);

    redor_terreno = 2 * (c + l);
    custo = redor_terreno * p;

    printf("O custo para cercar este terreno com esta tela sera: %.2f\n" , custo);
    return 0;
}
