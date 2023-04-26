#include <stdio.h>
#include <math.h>

float hipotenusa(float cat1, float cat2);

int main(){
    float cat1, cat2, hipo;
    printf("Digite o valor de um cateto: ");
    scanf("%f" , &cat1);
    printf("Digite o valor do outro cateto: ");
    scanf("%f" , &cat2);

    hipo = hipotenusa(cat1, cat2);
    printf("A hipotenusa eh: %.2f" , hipo);
    return 0;
}
float hipotenusa(float cat1, float cat2){
    float hipotenusa;
    hipotenusa = sqrt((pow(cat1,2)) + (pow(cat2,2)));
    return hipotenusa;
}
