#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_lido, unidade, centena, dezena, milhar;
    printf("Digite um numero com 4 algarismos: ");
    scanf("%d" , &num_lido);
    if(num_lido >= 1000 && num_lido <= 9999){
        unidade = num_lido %10;
        dezena = (num_lido/=10) %10;
        centena = (num_lido/=10) %10;
        milhar = (num_lido/=10) %10;
        printf("\n%d\n%d\n%d\n%d\n" , milhar, centena,dezena,unidade);
    }
    return 0;
}
