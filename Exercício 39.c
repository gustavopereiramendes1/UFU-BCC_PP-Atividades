#include <stdio.h>
#include <stdlib.h>

int main()
{
    float premiototal = 780000.00, parteA, parteB, parteC;
    parteA = premiototal * 0.46;
    parteB = premiototal * 0.32;
    parteC = premiototal - parteA - parteB;
    printf("O primeiro ganhador ganhara %.2f\nO segundo ganhador ganhara %.2f\nO terceiro ganhador ganhara %.2f\n" , parteA,parteB,parteC);
    return 0;
}
