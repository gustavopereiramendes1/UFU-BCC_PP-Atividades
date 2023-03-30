#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, resto;
    printf("Digite um numero inteiro maior do que zero, com 3 algarismos: ");
    scanf("%d", &num1);

    if (num1 >= 0 && num1 <= 999){
        resto = num1 % 10;
        resto += (num1/=10)%10;
        resto += (num1/10)%10;
        printf("A soma dos algarismos eh: %d" ,resto);
    }else{
        printf("\nNumero Invalido!\n");
    }
    
    
    return 0;
}
