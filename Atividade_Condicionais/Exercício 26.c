#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float km, litros, consumo;
    printf("Digite a distancia em KM: ");
    scanf("%f" , &km);
    printf("Digite o consumo em litros: ");
    scanf("%f" , &litros);

    consumo = km/litros;
    
    if(consumo < 8){
        printf("Venda o carro!");
    }else if (consumo >=8 && consumo <= 14){
        printf("Economico!");
    }else{
        printf("Super Economico!");
    }
    
    return 0;
}
