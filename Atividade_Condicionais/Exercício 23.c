#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int ano;
    printf("Digite o ano: ");
    scanf("%d" ,&ano);

    if(ano%400 == 0 || (ano%4 == 0 && ano%100 != 0)){
        printf("Esse ano eh bissexto!");
    }else{
        printf("Esse ano nao eh bissexto!");
    }
    return 0;
}
