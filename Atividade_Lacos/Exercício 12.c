#include <stdio.h>

int main()
{
    int num1, i, soma;

    printf("Digite um numero: ");
    scanf("%d" ,&num1);
    
    for (i = 1, soma = 0; i < num1; i++)
    {
        if(!(num1%i)){
            soma+=i;
        }
    }
    printf("A soma dos divisores do numero %d eh: %d" , num1, soma);
    
    return 0;
}
