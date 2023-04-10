#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num1 = 0;
    for (num1 = 0; num1 < 100000; num1+= 1000)
    {
        printf("%d\n" , num1);
    }
    
    return 0;
}