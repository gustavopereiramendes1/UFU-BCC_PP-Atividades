#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    float num1, num2, num3;
    printf("Digite um numero: ");
    scanf("%f" , &num1);
    printf("Digite outro numero: ");
    scanf("%f" , &num2);
    printf("Digite mais um numero: ");
    scanf("%f" , &num3);

    if(num1 <= num2 && num1 < num3){
        printf("%.2f, ", num1);
        if(num2 <= num3){
            printf("%.2f, %.2f", num2, num3);            
        }else{
            printf("%.2f, %.2f" , num3 , num2);
        }
    }else if (num2 < num3){
        printf("%.2f, " , num2);
        if (num1 < num3){
            printf("%.2f, %.2f" , num1, num3);
        }else{
            printf("%.2f, %.2f" , num3, num1);
        }
    }else{
        printf("%.2f, " ,num3);
        if (num1 < num2){
            printf("%.2f, %.2f", num1, num2);
        }else{
            printf("%.2f, %.2f" , num2, num1);
        }
        
    }
    
    return 0;
}
