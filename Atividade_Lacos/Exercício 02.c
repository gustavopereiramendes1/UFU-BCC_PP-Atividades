#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num1 = 0,i ;
    printf("Numero de 1 a 100 com for: ");
    
    for (i = 0; i < 100; i++){
        num1 += 1;
        printf("%d, " ,num1);
    }

    printf("\nNumero de 1 a 100 com while: ");

    i = 0;
    num1 = 0;
    while (i < 100)
    {
        num1 += 1;
        printf("%d, "  ,num1);
        i++;
    }
    i = 0; 
    num1 = 0;

    printf("\nNumero de 1 a 100 com do-while: ");
    do
    {
        num1 += 1;
        printf("%d, " , num1);
        i++;
    } while (i < 100);
    
    return 0;
}