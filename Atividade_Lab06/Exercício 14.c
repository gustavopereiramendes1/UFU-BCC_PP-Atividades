#include <stdio.h>
#define NUM_CARROS 2
typedef struct{
    char Marca[16];
    int ano;
    float preco;
}dados;

int main(){
    dados carro[NUM_CARROS];
    float preco;
    int qnt = 1;

    printf("--Insira os dados dos carro--\n\n");
    for(int i = 0; i < NUM_CARROS; i++){
        printf("--Carro %d--\n" , i+1);
        printf("Marca: ");
        fgets(carro[i].Marca, 16, stdin);
        setbuf(stdin, NULL);
        printf("Ano: ");
        scanf("%d" , &carro[i].ano);
        printf("Preco: ");
        scanf("%f" , &carro[i].preco);
        setbuf(stdin, NULL);
        printf("\n");
        
    }
    do{
        printf("\nDigite o preco desejado: ");
        scanf("%f" , &preco);
    }while(preco == 0);
    
    printf("--Carros nessa faixa de preco--\n\n");
    for(int i = 0; i < NUM_CARROS; i++){
        if(preco > carro[i].preco || preco == carro[i].preco){
            printf("Carro %d:\n" , qnt);
            printf("Marca: %s" ,carro[i].Marca);
            printf("Ano: %d\n", carro[i].ano);
            printf("Preco: R$%.2f" , carro[i].preco);
            qnt++;
        } 
        printf("\n\n");
        
    }
    
    return 0;
}
