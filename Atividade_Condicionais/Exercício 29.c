#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int x,y , resultado, calculo, acertos = 0;
    
    srand(time(NULL));
    x = (rand()%100);
    y = (rand()%100);
    calculo = x + y;
    printf("Resolva as questoes: \n");

    printf("Primeira Questao: \n %d + %d\n" , x, y);
    printf("Digite a resposta: ");
    scanf("%d" , &resultado);

    if(resultado == calculo){
        printf("\nAcertou!\n");
        acertos++;
    }else{
        printf("\nErrado!\n");
    }

    x = (rand()%100);
    y = (rand()%100);
    calculo = x + y;

    printf("\nSegunda Questao: \n %d + %d\n" , x, y);
    printf("Digite a resposta: ");
    scanf("%d" , &resultado);

    if(resultado == calculo){
        printf("\nAcertou!\n");
        acertos++;
    }else{
        printf("\nErrado!\n");
    }

    x = (rand()%100);
    y = (rand()%100);
    calculo = x + y;

    printf("\nTerceira Questao: \n %d + %d\n" , x, y);
    printf("Digite a resposta: ");
    scanf("%d" , &resultado);

    if(resultado == calculo){
        printf("\nAcertou!\n");
        acertos++;
    }else{
        printf("\nErrado!\n");
    }

    x = (rand()%100);
    y = (rand()%100);
    calculo = x + y;

    printf("\nQuarta Questao: \n %d + %d\n"  , x, y);
    printf("Digite a resposta: ");
    scanf("%d" , &resultado);

    if(resultado == calculo){
        printf("\nAcertou!\n");
        acertos++;
    }else{
        printf("\nErrado!\n");
    }

    x = (rand()%100);
    y = (rand()%100);
    calculo = x + y;

    printf("\nQuinta Questao: \n %d + %d\n" , x, y);
    printf("Digite a resposta: ");
    scanf("%d" , &resultado);

    if(resultado == calculo){
        printf("\nAcertou!\n");
        acertos++;
    }else{
        printf("\nErrado!\n");
    }

    printf("Voce acertou %d questoes" , acertos);
    return 0;
}
