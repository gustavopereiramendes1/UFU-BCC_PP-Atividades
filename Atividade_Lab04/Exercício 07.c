#include <stdio.h>

float Fah_conversao(float C);

int main(){
    float F, C;
    printf("Digite uma temperatura em Celcius: ");
    scanf("%f" , &C);

    F = Fah_conversao(C);
    printf("A temperatura em Fahrenheit eh: %.2f" , F);
    return 0;
}
float Fah_conversao(float C){
    float Fah;
    Fah = C * (9.0/5.0) + 32.0;
    return Fah;
}