#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    float preco_antigo, preco_novo, percentual;
    printf("Digite o preco antigo: ");
    scanf("%f" , &preco_antigo);
    if(preco_antigo < 50){
        percentual = 0.05;
        preco_novo = preco_antigo + (preco_antigo * percentual);
        printf("O preco novo eh: R$ %.2f" , preco_novo);
    }else if (preco_antigo >= 50 && preco_antigo <= 100){
        percentual = 0.1;
        preco_novo = preco_antigo + (preco_antigo * percentual);
        printf("O preco novo eh: R$ %.2f" , preco_novo);
    }else{
        percentual = 0.15;
        preco_novo = preco_antigo + (preco_antigo * percentual);
        printf("O preco novo eh: R$ %.2f" , preco_novo);
    }
    
    if(preco_novo < 80){
        printf("\nBarato!\n");
    }else if (preco_novo >= 80 && preco_novo <= 120)
    {
        printf("\nNormal!\n");
    }else if (preco_novo > 120 && preco_novo <= 200)
    {
        printf("\nCaro!\n");
    }else{
        printf("\nMuito Caro!\n");
    }
    
    
    return 0;
}
