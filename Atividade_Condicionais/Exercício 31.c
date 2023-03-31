#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    float altura, peso;
    printf("Digite a altura: ");
    scanf("%f" , &altura);
    printf("Digite o peso: ");
    scanf("%f" , &peso);

    if(altura < 1.20){
        if(peso <= 60){
            printf("\nClassificacao: A\n");
        }else if (peso >= 60 && peso <= 90){
            printf("\nClassificacao: D\n");
        }else{
            printf("\nClassificacao: G\n");
        }
        
    }else if (altura>=1.20 && altura <= 1.70){
        if(peso <= 60){
            printf("\nClassificacao: B\n");
        }else if (peso >= 60 && peso <= 90){
            printf("\nClassificacao: E\n");
        }else{
            printf("\nClassificacao: H\n");
        }
    }else{
        if(peso <= 60){
            printf("\nClassificacao: C\n");
        }else if (peso >= 60 && peso <= 90){
            printf("\nClassificacao: F\n");
        }else{
            printf("\nClassificacao: I\n");
        }
    }
    
    return 0;
}
