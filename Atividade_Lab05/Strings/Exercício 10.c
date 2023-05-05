#include <stdio.h>

#define desconto_vista 0.1


int main(){
    char nome[100];
    float preco, preco_com_desconto;
    
    printf("Digite o nome da mercadoria: ");
    fgets(nome, 100, stdin);
    
    printf("Digite o valor da mercadoria: ");
    setbuf(stdin, NULL);
    scanf("%f" ,&preco);

    preco_com_desconto = preco - (preco * desconto_vista);

    
    printf("--Mercadoria: ");
    fputs(nome, stdout);
    printf("\nPreco: R$%.2f" , preco);
    printf("\nPreco com desconto a vista: R$%.2f" , preco_com_desconto);
    return 0;
}