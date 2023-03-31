#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int dia, mes, ano;
    printf("Digite o dia: ");
    scanf("%d/%d/%d" , &dia, &mes, &ano);
    
    if(ano >= 1)
        if(ano%400 == 0 || (ano%4 == 0 && ano%100 != 0)){
            if(mes == 2 || mes == 02){
                if(dia >=1 && dia <=29){
                    printf("\nData Valida!\n");
                    printf("%d/%d/%d\n" , dia, mes, ano);
                }else{
                    printf("\nData Invalida\n");
                }
            }
            else if((mes >= 1 && mes<= 12) && (dia >= 1 && dia<= 31)){
                printf("\nData Valida!\n");
                printf("%d/%d/%d\n" , dia, mes, ano);
            }else{
                printf("\nData Invalida\n");
            }
        }else{
            if(mes == 2 || mes == 02){
                if(dia >=1 && dia <=28){
                    printf("\nData Valida!\n");
                    printf("%d/%d/%d\n" , dia, mes, ano);
                }else{
                    printf("\nData Invalida\n");
                }
            }
            else if((mes >= 1 && mes<= 12) && (dia >= 1 && dia<=31 )){
                printf("\nData Valida!\n");
                printf("%d/%d/%d\n" , dia, mes, ano);
            }else{
                printf("\nData Invalida\n");
            }
        }else{
            printf("\nData Invalida\n");
        }


    
    return 0;
}
