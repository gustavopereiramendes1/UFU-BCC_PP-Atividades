#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m2, acres;
    printf("Digite a area em metros quadrados: ");
    scanf("%f" ,&m2);

    acres = m2*0.000247;

    printf("A area em acres eh: %f\n" , acres);
    return 0;
}
