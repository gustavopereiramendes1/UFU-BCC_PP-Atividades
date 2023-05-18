#include <stdio.h>
#define NUM_AEROPORTOS 5
#define NUM_VOOS 5
typedef struct{
    int codigo;
    int qnt_vooS;
    int qnt_vooC;
}aero;
typedef struct{
    int aeroporto_destino;
    int aeroporto_origem;
}voo;
int main(){
    aero aeroportos[NUM_AEROPORTOS];
    voo voos[NUM_VOOS];

    printf("--Aeroportos--\n");
    for(int i = 0; i < NUM_AEROPORTOS; i++){
        aeroportos[i].codigo = i;
        aeroportos[i].qnt_vooC = 0;
        aeroportos[i].qnt_vooS = 0;
    }
    printf("--Insira os dados dos voos--\n\n");
    for(int i = 0; i < NUM_VOOS; i++){
        
        printf("Voo %d\n" , i+1);
        printf("Origem: ");
        scanf("%d" , &voos[i].aeroporto_origem);
        printf("Destino: ");
        scanf("%d" , &voos[i].aeroporto_destino);
        printf("\n\n");
        for(int j = 0; j < NUM_AEROPORTOS; j++){
            if(voos[i].aeroporto_origem == aeroportos[j].codigo){
                aeroportos[j].qnt_vooS++;
            }
            if(voos[i].aeroporto_destino == aeroportos[j].codigo){
                aeroportos[j].qnt_vooC++;
            }
        }
        
    }
    
    printf("\nInformacoes dos aeroportos:\n");
    for (int i = 0; i < NUM_AEROPORTOS; i++) {
        printf("Aeroporto CODIGO: %d\n", aeroportos[i].codigo);
        printf("Voos saindo: %d\n", aeroportos[i].qnt_vooS);
        printf("Voos chegando: %d\n\n", aeroportos[i].qnt_vooC);
    }

    
    return 0;
}