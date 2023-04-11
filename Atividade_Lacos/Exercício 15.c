#include <stdio.h>
#include <math.h>

int main()
{
    float  num1;

    do{
        printf("Digite um numero (zero ou negativo encerra): ");
        scanf("%f" ,&num1);

        if(num1 > 0){
            printf("O Quadrado eh: %.2f\n", pow(num1, 2));
            printf("O Cubo eh: %.2f\n", pow(num1, 3));
            printf("A raiz quadrada eh: %.2f\n\n", sqrt(num1));
        }
    }while(num1 > 0);

    return 0;
}
