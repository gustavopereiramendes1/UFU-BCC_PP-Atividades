#include <stdio.h>
#include <math.h>
#define PI 3.141592

float vol_cilindro(float altura, float raio);

int main(){
    float altura, raio;
    printf("Digite a altura do cilindro: ");
    scanf("%f" , &altura);
    printf("Digite o raio do cilindro: ");
    scanf("%f" , &raio);

    printf("O volume do cilindro eh: %f" ,vol_cilindro(altura, raio));
    return 0;
}
float vol_cilindro(float altura, float raio){
    float volume;

    volume = PI * pow(raio,2) * altura;
    return volume;
}