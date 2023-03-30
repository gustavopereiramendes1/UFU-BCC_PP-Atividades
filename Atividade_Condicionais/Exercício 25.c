#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float raiz1, raiz2, a,b,c, delta;
    printf("Para calcular a equacao de segundo grau.\n");
    printf("Digite o valor de a: ");
    scanf("%f" , &a);
    printf("Digite o valor de b: ");
    scanf("%f" , &b);
    printf("Digite o valor de c: ");
    scanf("%f" , &c);

    if(a != 0){
        delta = pow(b,2) - 4 * a * c;
        raiz1 = (-b + sqrt(pow(b,2) - 4 * a * c))/2*a;
        raiz2 = (-b - sqrt(delta))/2*a;

        if(delta < 0){
            printf("\nNao existe raiz\n");
        }else if (delta == 0)
        {
            printf("\nRaiz unica: %.2f\n" , raiz1);
        }else{
            printf("\nAs raizes sao: %.2f e %.2f\n" , raiz1, raiz2);
        }
        
    }else{
        printf("\nNao eh equacao de segundo grau\n");
    }

    return 0;
}
