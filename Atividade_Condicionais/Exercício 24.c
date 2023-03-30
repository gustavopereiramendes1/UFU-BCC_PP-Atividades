#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char letra_ini, letra_final;
    float porcentagem, preco;
    printf("Digite o valor do produto: ");
    scanf("%f" , &preco);
    printf("Digite o estado: ");
    scanf(" %c %c" , &letra_ini, &letra_final);

    if(letra_ini == 'M' || letra_ini == 'm'){
        switch (letra_final){
        case 'G':
            printf("\nMinas Gerais\n");
            porcentagem = 0.07;
            preco += preco * porcentagem;
            printf("\nO preco final eh: R$ %.2f\n" , preco);
            break;
        
        case 'g':
            printf("\nMinas Gerais\n");
            porcentagem = 0.07;
            preco += preco * porcentagem;
            printf("\nO preco final eh: R$ %.2f\n" , preco);
            break;

        case 'S':
            printf("\nMato Grosso do Sul\n");
            porcentagem = 0.08;
            preco += preco * porcentagem;
            printf("\nO preco final eh: R$ %.2f\n" , preco);
            break;

        case 's':
            printf("\nMato Grosso do Sul\n");
            porcentagem = 0.08;
            preco += preco * porcentagem;
            printf("\nO preco final eh: R$ %.2f\n" , preco);
            break;

        default:
            printf("\nEstado invalido!\n");
            break;
        }
    }else if (letra_ini == 'S' || letra_ini == 's'){
        switch (letra_final){
        case 'P':
            printf("\nSao Paulo\n");
            porcentagem = 0.12;
            preco += preco * porcentagem;
            printf("\nO preco final eh: R$ %.2f\n" , preco);
            break;
        
        case 'p':
            printf("\nSao Paulo\n");
            porcentagem = 0.12;
            preco += preco * porcentagem;
            printf("\nO preco final eh: R$ %.2f\n" , preco);
            break;
        
        default:
            printf("\nEstado invalido!\n");
            break;
        }
    }else if (letra_ini == 'R' || letra_ini == 'r'){
        switch (letra_final){
        case 'J':
            printf("\nRio de janeiro\n");
            porcentagem = 0.15;
            preco += preco * porcentagem;
            printf("\nO preco final eh: R$ %.2f\n" , preco);
            break;
        
        case 'j':
            printf("\nRio de janeiro\n");
            porcentagem = 0.15;
            preco += preco * porcentagem;
            printf("\nO preco final eh: R$ %.2f\n" , preco);
            break;

        default:
            printf("\nEstado invalido!\n");
            break;
        }
    }else{
        printf("\nEstado invalido!\n");
    }




    /*switch(letra_ini){
        case 'M':
            if(letra_final == 'G'){
                printf("\nMinas Gerais\n");
                porcentagem = 0.07;
                preco += preco * porcentagem;
                printf("\nO preco final eh: R$ %.2f\n" , preco);
            }else if(letra_final == 'S'){
                printf("Mato Grosso do Sul");
                porcentagem = 0.08;
                preco += preco * porcentagem;
                printf("O preco final eh: R$ %.2f" , preco);
            }
            break;
        
        case 'S':
            if (letra_final == 'P')
            {
                printf("Sao Paulo");
                porcentagem = 0.12;
                preco += preco * porcentagem;
                printf("O preco final eh: R$ %.2f" , preco);
            }
            break;

        case 'R':
            if (letra_final == 'J')
            {
                printf("Rio de janeiro");
                porcentagem = 0.15;
                preco += preco * porcentagem;
                printf("O preco final eh: R$ %.2f" , preco);
            }
            break;
        
        default:
            printf("\nEstado Invalido!\n");
    }*/
    return 0;
}
