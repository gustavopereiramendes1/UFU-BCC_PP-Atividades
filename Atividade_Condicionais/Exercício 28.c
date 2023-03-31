#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2, num3, opcao;
    float calculo;
    printf("Digite um numero positivo: ");
    scanf("%d",&num1);
    printf("Digite outro numero positivo: ");
    scanf("%d",&num2);
    printf("Digite mais um numero positivo: ");
    scanf("%d",&num3);

    if(num1> 0 && num2 > 0 && num3> 0){
        do
        {
            printf("Escolha um das opcoes: \n");
            printf("1 - Geometrica\n");
            printf("2 - Ponderada\n");
            printf("3 - Harmonica\n");
            printf("4 - Aritmetica\n");

            printf("Digite a opcao deseja: ");
            scanf("%d" , &opcao);
            if(opcao <= 0 && opcao>=4){
                printf("Opcao invalida!");
            }
        } while (opcao <= 0 && opcao>=4);
        switch (opcao)
        {
        case 1:
            printf("Escolheu Geometrica: \n");
            calculo = pow(num1*num2*num3,1/3);
            printf("O Resultado eh: %.2f \n" , calculo);
            break;
        
        case 2:
            printf("Escolheu Ponderada: \n");
            calculo = ((num1*1)+(num2*2) + (num3*3))/3;
            printf("O Resultado eh: %.2f\n" , calculo);
            break;
        
        case 3:
            printf("Escolheu Harmonica: \n");
            calculo = 1 /((1/num1)+(1/num2)+(1/num3));
            printf("O Resultado eh: %.2f \n" , calculo);
            break;
        
        case 4:
            printf("Escolheu Aritmetica: \n");
            calculo = (num1+num2+num3)/3;
            printf("O Resultado eh: %.2f \n" , calculo);
            break;
        
        default:
            break;
        }
    }
    return 0;
}
