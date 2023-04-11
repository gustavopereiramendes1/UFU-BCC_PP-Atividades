#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m2, hec;
    printf("Area em hectares: ");
    scanf("%f", &hec);
    m2 = hec * 10000;

    printf("A area em metros quadrados eh: %.2f\n" ,m2);
    return 0;
}
