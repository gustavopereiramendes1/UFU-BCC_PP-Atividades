#include <stdio.h>

int main()
{
    int opcao;
    float num1, num2;

    do{
        printf("\nMenu\n");
        printf("(1) Adicao\n");
        printf("(2) Subtracao\n");
        printf("(3) Multiplicacao\n");
        printf("(4) Divisao\n");
        printf("(5) Saida\n");

        printf("Digite a opcao desejada: ");
        scanf("%d" , &opcao);
        printf("\nOpcao escolhida (%d)\n" , opcao);
        if(opcao == 1){
            printf("Digite um numero: ");
            scanf("%f",&num1);
            printf("Digite outro numero: ");
            scanf("%f",&num2);

            printf("O resultado da soma dos numeros eh: %.2f\n" , (num1 + num2));
        }

        if(opcao == 2){
            printf("Digite um numero: ");
            scanf("%f",&num1);
            printf("Digite outro numero: ");
            scanf("%f",&num2);

            printf("O resultado da subtracao dos numeros eh: %.2f\n" , (num1 - num2));
        }

        if(opcao == 3){
            printf("Digite um numero: ");
            scanf("%f",&num1);
            printf("Digite outro numero: ");
            scanf("%f",&num2);

            printf("O resultado da multiplicacao dos numeros eh: %.2f\n" , (num1 * num2));
        }

        if(opcao == 4){
            printf("Digite um numero: ");
            scanf("%f",&num1);
            printf("Digite outro numero: ");
            scanf("%f",&num2);

            if (!(num2)){
                printf("[ERRO]: O divisor nao pode ser 0\n");
                printf("Digite outro numero: ");
                scanf("%f",&num2);
            }
            

            printf("O resultado da divisao dos numeros eh: %.2f\n" , (num1 / num2));
        }

        if (opcao == 5)
        {
            printf("Fim");
            break;
        }
        
        if (opcao != 5 && opcao < 1 && opcao > 5)
        {
            printf("[ERRO]: Opcao invalida!");
        }
        
    }while(opcao != 5);
    return 0;
}
