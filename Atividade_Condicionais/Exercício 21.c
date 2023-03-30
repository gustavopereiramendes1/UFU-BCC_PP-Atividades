#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int opcao;
    float num1, num2;
    
    do{
        printf("\nEscolha a opcao: \n");
        printf("1- Soma de 2 numeros.\n");
        printf("2- Diferenca entre 2 numeros (maior pelo menor).\n");
        printf("3- Produto entre 2 numeros.\n");
        printf("4- Divisao entre 2 numeros (o denominador nao pode ser zero).\n");

        printf("\nSelecione a opcao desejada: ");
        scanf("%d" , &opcao);
        if(opcao <=0 || opcao >4){
            printf("\nOpcao Invalida!\n");
        }else{
            printf("\nVc selecionou opcao %d!\n" ,opcao);
        }
    } while (opcao <=0 || opcao > 4);

    switch (opcao)
    {
    case 1:
        printf("Digite um numero: ");
        scanf("%f" , &num1);
        printf("Digite outro numero: ");
        scanf("%f" , &num2);

        printf("A resultado eh: %.2f", (num1 + num2));
        break;
    
    case 2:
        printf("Digite um numero: ");
        scanf("%f" , &num1);
        printf("Digite outro numero: ");
        scanf("%f" , &num2);

        if(num1 > num2){
            printf("A resultado eh: %.2f", (num1 - num2));
        }else{
            printf("A resultado eh: %.2f", (num2 - num1));
        }
        
        break;

    case 3:
        printf("Digite um numero: ");
        scanf("%f" , &num1);
        printf("Digite outro numero: ");
        scanf("%f" , &num2);

        printf("A resultado eh: %.2f", (num1 * num2));
        break;

    case 4:
        do{
            printf("Digite um numero: ");
            scanf("%f" , &num1);
            printf("Digite outro numero: ");
            scanf("%f" , &num2);
            
            if(num2 != 0){
            printf("A resultado eh: %.2f", (num1 / num2));
        }else{
            printf("\nO denominador tem que ser diferente de 0.\n");
        }
        }while(num2 == 0);
        break;

    default:
        break;
    }
    return 0;
}
