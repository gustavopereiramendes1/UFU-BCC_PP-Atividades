#include <stdio.h>

void consumo_carro(float km, float litros);

int main(){
    float km, litros;

    printf("Digite a distancia: ");
    scanf("%f" ,&km);
    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    consumo_carro(km, litros);

}
void consumo_carro(float km, float litros){
    float consumo;

    consumo = km / litros;

    if(consumo < 8 ){
        printf("Consumo do carro menor do que 8. Venda o carro!");
    }else if (consumo < 14)
    {
        printf("Consumo do carro entre 8 e 14. Economico!");
    }else{
        printf("Consumo do carro maior do que 14. Super Economico!");
    }
    
}