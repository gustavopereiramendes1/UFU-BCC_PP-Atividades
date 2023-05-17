#include <stdio.h>

struct vetor{
    float a;
    float b;
    float c;
};
typedef struct vetor vetor;

int main(){
    vetor vet1, vet2, soma;
    printf("\n--Calcula a soma de vetores--");
    printf("\nDigite os valores de x, y e z do primeiro vetor: ");
    scanf("%f %f %f" , &vet1.a, &vet1.b, &vet1.c);
    printf("\nDigite os valores de x, y e z do segundo vetor: ");
    scanf("%f %f %f" , &vet2.a, &vet2.b, &vet2.c);

    soma.a = vet1.a + vet2.a;
    soma.b = vet1.b + vet2.b;
    soma.c = vet1.b + vet2.b;
    
    printf("\nA soma dos vetores eh : (%.2f, %.2f, %.2f)\n", soma.a, soma.b, soma.c);
    
    return 0;
}