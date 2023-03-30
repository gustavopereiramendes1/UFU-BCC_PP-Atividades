#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int opcao;
    float num1, num2;

    do{
        printf("Menu de Operacoes\n");
        printf("Soma (1)\n");
        printf("Subtracao (2)\n");
        printf("Multiplicacao (3)\n");
        printf("Divisao (4)\n");

        printf("\nSelecione a opcao desejada: ");
        scanf("%d" , &opcao);
    } while (opcao <=0 || opcao > 4); 
    switch (opcao)
    {
    case 1:
        printf("\nVc selecionou soma!\n");
        printf("Digite um numero: ");
        scanf("%f" , &num1);
        printf("Digite outro numero: ");
        scanf("%f" , &num2);

        printf("A resultado eh: %.2f", (num1 + num2));
        break;
    
    case 2:
        printf("\nVc selecionou subtracao!\n");
        printf("Digite um numero: ");
        scanf("%f" , &num1);
        printf("Digite outro numero: ");
        scanf("%f" , &num2);

        printf("A resultado eh: %.2f", (num1 - num2));
        break;

    case 3:
        printf("\nVc selecionou multiplicacao!\n");
        printf("Digite um numero: ");
        scanf("%f" , &num1);
        printf("Digite outro numero: ");
        scanf("%f" , &num2);

        printf("A resultado eh: %.2f", (num1 * num2));
        break;

    case 4:
        printf("\nVc selecionou divisao!\n");
        printf("Digite um numero: ");
        scanf("%f" , &num1);
        printf("Digite outro numero: ");
        scanf("%f" , &num2);
        
        if(num2 != 0){
            printf("A resultado eh: %.2f", (num1 / num2));
        }else{
            printf("O denominador tem que ser diferente de 0.");
        }
        
        break;
    default:
        break;
    }
    
    return 0;
}
