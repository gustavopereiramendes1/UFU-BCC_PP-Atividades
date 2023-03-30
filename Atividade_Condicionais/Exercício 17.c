#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altura, base_menor, base_Maior, area;
    printf("Digite a altura do trapezio: ");
    scanf("%f" , &altura);
    printf("Digite a base maior do trapezio: ");
    scanf("%f" , &base_Maior);
    printf("Digite a base menor do trapezio: ");
    scanf("%f" , &base_menor);

    if(base_Maior > 0 && base_menor > 0){
        area = ((base_Maior + base_menor) * altura)/2;
        printf("\nA area do trapezio eh: %.2f\n" , area);
    }else{
        printf("\nBase invalida!");
    }
    return 0;
}
