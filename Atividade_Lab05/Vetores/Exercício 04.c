#include <stdio.h>

int main(){
    int val[5], i, maior, menor, maior_posicao, menor_posicao;

    printf("Digite um valor inteiro: ");
    scanf("%d" , &val[0]);
    menor = val[0];
    maior = val[0];
    maior_posicao = 0;
    menor_posicao = 0;

    for(i = 1; i < 5; i++){
        printf("Digite um valor inteiro: ");
        scanf("%d" , &val[i]);
        if(val[i] > maior){
            maior = val[i];
            maior_posicao = i +1;
        }
        if(val[i] < menor){
            menor = val[i];
            menor_posicao = i +1;
        }
    }
    printf("\nA maior nota eh %d, e se encontra na posicao %d\n" , maior, maior_posicao);
    printf("\nA menor nota eh %d, e se encontra na posicao %d\n" , menor, menor_posicao);
    return 0;
}
