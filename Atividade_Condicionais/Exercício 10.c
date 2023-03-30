#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, peso;
    char sexo;
    printf("Digite sua altura: ");
    scanf("%f" , &altura);
    printf("Digite o sexo: ");
    scanf(" 1%c" , &sexo);
    
    if(sexo == 'M' || sexo =='m'){                //Sexo masculino
        peso = (72.7 * altura) - 58.0;
        printf("\nO peso ideal masculino eh %f\n" , peso);
    }else if(sexo == 'F' || sexo =='f'){             //Sexo Feminino
        peso = (62.1 * altura) - 44.7;
        printf("\nO peso ideal feminino eh %f\n" , peso);
    }else
    {
        printf("\nSexo invalido!\n");
    }
    
    return 0;
}
