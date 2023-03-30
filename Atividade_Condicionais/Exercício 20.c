#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Digite um valor: ");
    scanf("%f", &a);
    printf("Digite outro valor: ");
    scanf("%f", &b);
    printf("Digite mais um valor: ");
    scanf("%f", &c);

    if((a+b) > c && (a+c) > b && (b+c) > a){
        printf("E um triangunlo ");
        if(a == b && a == c){
            printf("equilatero.\n");
        }else if (a == b || a == c || c == b)
        {
            printf("isosceles.\n");
        }else{
            printf("escaleno.\n");
        }
        
    }else{
        printf("Nao eh um triangulo!");
    }
    return 0;
}
