#include <stdio.h>
#include <stdlib.h>

int main()
{
    float amigo1,valoramigo1, amigo2, valoramigo2, amigo3, valoramigo3, valorapostado, premiototal;
    printf("Digite o valor que cada apostador investiu:\nApostador 1: ");
    scanf("%f" ,&amigo1);
    printf("Apostador 2: ");
    scanf("%f" ,&amigo2);
    printf("Apostador 3: ");
    scanf("%f" ,&amigo3);
    printf("\nValor do premio: ");
    scanf("%f" , &premiototal);
    valorapostado = amigo1 + amigo2 + amigo3;
    valoramigo1 = (((amigo1 *100)/valorapostado)/100) * premiototal;
    valoramigo2 = (((amigo2 *100)/valorapostado)/100) * premiototal;
    valoramigo3 = (((amigo3 *100)/valorapostado)/100) * premiototal;
    printf("O apostador 1 ira receber: R$ %.2f\nO apostador 2 ira receber: R$ %.2f\nO apostador 3 ira receber: R$ %.2f\n " ,valoramigo1,valoramigo2,valoramigo3);
    return 0;
}
