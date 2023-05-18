#include <stdio.h>
#include <string.h>
#define NUM_EQUIPAMENTOS 5
typedef struct{
    char nome[15];          
    float potencia;        //Kw
    float tempo_ativo;    //horas
}dados;

float calculo_consumoTotal(dados *eletro, float t_dias);
float calculo_consumoRelativo(dados *eletro, float t_dias, float consumo_total, int i);
int main(){
    dados eletro[NUM_EQUIPAMENTOS];
    float t_dias, consumo_total, consumo_relativo;
    int tamanho;

    printf("--Insira os dados dos Eletrodomesticos--\n\n");

    for(int i = 0; i < NUM_EQUIPAMENTOS; i++){
        printf("--Eltrodosmetico %d\n" , i+1);
        printf("Nome: ");
        fgets(eletro[i].nome, 15,stdin);
        setbuf(stdin, NULL);
        printf("Potencia(Kw): ");
        scanf("%f" , &eletro[i].potencia);
        printf("Tempo ativo(h): ");
        scanf("%f" , &eletro[i].tempo_ativo);
        setbuf(stdin, NULL);
        printf("\n\n");
        tamanho = strlen(eletro[i].nome);
        for(int j = 0; j < tamanho; j++){
            if(eletro[i].nome[j] == '\n'){
                eletro[i].nome[j] = '\0';
            }
        }
    }

    printf("Digite um periodo de tempo(dias): ");
    scanf("%f" , &t_dias);
    consumo_total = calculo_consumoTotal(eletro, t_dias);
    printf("Consumo Total: %.2f kW/h\n" ,consumo_total);
    printf("Consumo relativo dos eletrodomesticos: \n");
    for(int i = 0; i < NUM_EQUIPAMENTOS; i++){
        consumo_relativo = calculo_consumoRelativo(eletro, t_dias, consumo_total, i);
        printf("%s: %.2f%%\n" , eletro[i].nome, consumo_relativo);
    }
    return 0;
}   
float calculo_consumoTotal(dados *eletro, float t_dias){
    float consumo_total = 0;
    for(int i = 0; i < NUM_EQUIPAMENTOS; i++){
        consumo_total += eletro[i].potencia * eletro[i].tempo_ativo * t_dias; 
    }
    return consumo_total;
}
float calculo_consumoRelativo(dados *eletro, float t_dias, float consumo_total, int i){
    float consumo_relativo;

    consumo_relativo = eletro[i].potencia * eletro[i].tempo_ativo * t_dias / consumo_total * 100;
    return consumo_relativo;
}