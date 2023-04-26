#include <stdio.h>

int eh_triangulo(float num1, float num2, float num3);
void tipo_triangulo(float num1, float num2, float num3);

int main(){
    float num1, num2, num3;

    printf("Digite o valor de um lado: ");
    scanf("%f" ,&num1);
    printf("Digite o valor de outro lado: ");
    scanf("%f" ,&num2);
    printf("Digite o valor do outro lado: ");
    scanf("%f" ,&num3);

    eh_triangulo(num1, num2, num3);
    if(eh_triangulo( num1, num2, num3)){
        tipo_triangulo(num1, num2, num3);
    }else{
        printf("Nao eh um triangulo.");
    }
    return 0;
}
int eh_triangulo(float num1, float num2, float num3){
    
    if(((num1 + num2) > num3) || ((num1 + num3) > num2) || ((num2 + num3) > num1)){
        return 1;
    }else{
        return 0;
    }
}
void tipo_triangulo(float num1, float num2, float num3){

    if(num1 == num2 && num3 == num1){
        printf("\nO triangulo eh equilatero.");
    }else if (num1 == num2 || num1 == num3 || num2 == num3)
    {
        printf("\nO triangulo eh isosceles.");
    }else{
        printf("\nO triangulo eh escaleno.");
    }
    
}
