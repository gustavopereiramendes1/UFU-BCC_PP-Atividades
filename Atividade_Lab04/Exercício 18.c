#include <stdio.h>


int cal_pontecia(int num1, int num2);

int main()
{
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d" , &num1);
    printf("Digite outro numero: ");
    scanf("%d" , &num2);

    printf("O Resultado de %d^%d eh: %d" , num1, num2, cal_pontecia(num1, num2));

    return 0;
}
int cal_pontecia(int num1, int num2){
    int pontecia = num1, z;

    if(num2 > 0){
        for(z = 1; z < num2; z++){
            pontecia *= num1;
        }
    }else if (num2 == 0)
    {
        pontecia = 1;
    }else{
        num2 *= -1;
        for(z = 1; z < num2; z++){
            pontecia *= num1;
        }
    }
    
    return pontecia;
}
