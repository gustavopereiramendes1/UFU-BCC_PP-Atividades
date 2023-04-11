#include <stdio.h>
#include <stdlib.h>

int main()
{
    float jarda, metro;
    printf("Digite o comprimento em metro: ");
    scanf("%f" , &metro);
    jarda = metro/0.91;
    printf("O comprimento em jardas eh: %.3f\n" ,jarda);
    return 0;
}
