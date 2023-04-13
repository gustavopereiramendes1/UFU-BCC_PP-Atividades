#include <stdio.h>

int main()
{
    int ano;
    float altura_chico = 1.50, altura_ze = 1.10;
    printf("A altura de ze e chico eh respectivamente: %.2f, %.2f.\n" , altura_ze, altura_chico);
    printf("Ze cresce 3 centimetros por ano e Chico cresce 2 centimetros.\n");
    for(ano = 0; altura_ze <= altura_chico; altura_ze+=0.03, altura_chico+=0.02){
        ano++;
        
    }
    printf("\nEm %d anos, Ze sera maior que Chico.\n" , ano);
    return 0;
}
