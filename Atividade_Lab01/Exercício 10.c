#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km, ms;
    printf("Digite a velocidade em KM/h: ");
    scanf("%f" , &km);
    ms = km/3.6;
    printf("A velocidade em M/s eh: %f\n" ,ms );
    return 0;
}
