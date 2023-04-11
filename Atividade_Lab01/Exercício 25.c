#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a , m2;
    printf("Digite a area em acres: ");
    scanf("%f" , &a);
    m2 = a * 4048.58;
    printf("A area em metros quadrados eh: %.3f\n" , m2);
    return 0;
}
