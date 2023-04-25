#include <stdio.h>
#include <math.h>
#define  PI  3.141592      //constante


float vol_esfera(float raio);  //declaração da função


int main(){
    float raio;
    printf("Digite o raio da esfeira: ");
    scanf("%f" ,&raio);

    printf("O volume da esfera eh: %f" ,vol_esfera(raio));
    return 0;
}
float vol_esfera(float raio){                   //função que calcula o valor do volume da esfera
    float volume;
    volume = (4 * PI * pow(raio, 3))/3;
    return volume;
}