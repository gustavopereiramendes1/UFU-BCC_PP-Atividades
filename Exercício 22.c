#include <stdio.h>
#include <stdlib.h>

int main()
{
    float jardas, metros;
    printf("Digite o comprimento em jardas: ");
    scanf("%f" ,&jardas);
    metros = jardas *0.91;
    printf("O comprimento em metros eh: %.3f\n" , metros);
    return 0;
}
