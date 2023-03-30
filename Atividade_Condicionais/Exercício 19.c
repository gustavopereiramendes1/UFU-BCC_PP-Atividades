#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1;
    printf("Digite um numero inteiro: ");
    scanf("%d" , &num1);

    if(num1%3 == 0 || num1%5 == 0){
        if(num1%3 == 0 && num1%5 == 0){
            printf("Divisivel por 5 e por 3");
        }else if(num1%3 == 0){
            printf("Divisivel por 3!");
        }else{
            printf("Divisivel por 5!");
        }
        
    }else{
        printf("Nao eh divisivel por 3, nem por 5.");
    }
    return 0;
}
