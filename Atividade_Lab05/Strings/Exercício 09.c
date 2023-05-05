#include <stdio.h>
#include <string.h>

int main(){
    char modelos[5][20] = {"Fusca", "Gol", "Vectra", "S10", "Ferrari"};
    float consumo_carro[5] = {10.9, 12.3, 5.8, 9.5, 16.0};
    int i,mais_Eco;
    
    mais_Eco = 0;
    for(i = 1; i < 5; i++){
        if(consumo_carro[i] > mais_Eco){
            mais_Eco = i;
        }
    }
    printf("O carro mais economico eh: %s\n" , modelos[mais_Eco]);

    printf("\nQuantidade de combustivel consumida por cada carro para percorrer 1.000 km:\n");
    for (int i = 0; i < 5; i++) {
    float combustivel = 1000.0 / consumo_carro[i];
    printf("%s: %.2f litros\n", modelos[i], combustivel);
  }
    
    return 0;
}