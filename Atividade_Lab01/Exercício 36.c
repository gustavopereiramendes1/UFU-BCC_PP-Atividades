#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    const float PI = 3.141592;
    float altura, raio , volume;
    printf("Digite o valor da altura do cilindro: ");
    scanf("%f" ,&altura);
    printf("Digite o valor do raio do cilindro: ");
    scanf("%f" ,&raio);
    volume = PI * pow(raio,2) * altura;
    printf("O volume do cilindro eh: %f\n" , volume);
    return 0;
}
