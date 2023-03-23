#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_lido, num_gerado, unidade, dezena, centena;
    printf("Digite um numero inteiro de 3 algarismos: ");
    scanf("%d" , &num_lido);

    if(num_lido >= 100 && num_lido <=999){

        unidade = num_lido % 10;
        dezena = (num_lido/=10) % 10;
        centena = (num_lido /= 10) %10;
        printf("%d%d%d \n" , unidade , dezena, centena);
    }else{
    printf("\nFalei pra digitar um numero inteiro de 3 algarismo.\n");
    }
    return 0;
}
