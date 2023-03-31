#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int codigo;
    float preco;
    
    printf("Digite codigo do produto obs.(100 ate 106):");
    scanf("%d" , &codigo);

    switch (codigo)
    {
    case 100:
        printf("\nProduto selecionado: Cachorro Quente\n");
        preco = 1.20;
        printf("O valor do Produto eh: R$ %.2f\n" , preco);
        break;
    
    case 101:
        printf("\nProduto selecionado: Bauru Simples\n");
        preco = 1.30;
        printf("O valor do Produto eh: R$ %.2f\n" , preco);
        break;
    
    case 102:
        printf("\nProduto selecionado: Bauru com Ovo\n");
        preco = 1.50;
        printf("O valor do Produto eh: R$ %.2f\n" , preco);
        break;
    
    case 103:
        printf("\nProduto selecionado: Hamburguer\n");
        preco = 1.20;
        printf("O valor do Produto eh: R$ %.2f\n" , preco);
        break;
    
    case 104:
        printf("\nProduto selecionado: Cheeseburguer\n");
        preco = 1.70;
        printf("O valor do Produto eh: R$ %.2f\n" , preco);
        break;
    
    case 105:
        printf("\nProduto selecionado: Suco\n");
        preco = 2.20;
        printf("O valor do Produto eh: R$ %.2f\n" , preco);
        break;
    
    case 106:
        printf("\nProduto selecionado: Refrigerante\n");
        preco = 1.00;
        printf("O valor do Produto eh: R$ %.2f\n" , preco);
        break;
    
    default:
        break;
    }

    return 0;
}
