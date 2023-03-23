#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km, ms;
    printf("Digite a velocidade em M/s: ");
    scanf("%f" , &ms);
    km = ms *3.6;
    printf("A velocidade em KM/h eh: %f \n" ,km);
    return 0;
}
