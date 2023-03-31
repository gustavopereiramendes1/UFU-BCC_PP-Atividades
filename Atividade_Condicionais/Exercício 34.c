#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    float nota;
    int faltas;
    printf("Digite a nota: ");
    scanf("%f", &nota);
    printf("Digite o numero de faltas: ");
    scanf("%d" , &faltas);

    if(nota >=0 || nota <=10){
        if(nota >= 9 && nota <=10){
            if(faltas <= 20){
                printf("O conceito eh: A");
            }else if (faltas > 20)
            {
                printf("O conceito eh: B");
            }
            
        }else if (nota >= 7.5 && nota <= 8.9){
            if (faltas <= 20){
                printf("O conceito eh: B");
            }else if (faltas > 20){
                printf("O conceito eh: C");
            }
            
            
        }else if (nota >=5 && nota <=7.5){
            if (faltas <= 20){
                printf("O conceito eh: C");
            }else if (faltas > 20){
                printf("O conceito eh: D");
            }
        }else if (nota >= 4 && nota<=4.9){
            if (faltas <= 20){
                printf("O conceito eh: D");
            }else if (faltas > 20){
                printf("O conceito eh: E");
            }
        }else{
            if (faltas <= 20){
                printf("O conceito eh: E");
            }else if (faltas > 20){
                printf("O conceito eh: E");
            }
        }
    }
    
    
    
    return 0;
}
