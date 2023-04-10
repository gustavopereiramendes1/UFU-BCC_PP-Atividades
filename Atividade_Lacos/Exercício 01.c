#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1 = 0, i;
    printf("Os primeiro 5 multiplos de 3 sao: \n");
    for( i = 0; i < 5; i++){
        num1 += 3;
        printf("%d\n" , num1);
    }    
    return 0;
}

