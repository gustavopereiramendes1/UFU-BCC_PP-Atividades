#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m2, hec;
    printf("Digite a area em metros quadrados: ");
    scanf("%f", &m2);
    hec = m2 *0.0001;

    printf("A area em hectares eh: %f\n" , hec);
    return 0;
}
