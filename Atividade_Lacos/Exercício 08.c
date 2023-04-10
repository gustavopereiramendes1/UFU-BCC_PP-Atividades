#include <stdio.h>

int main(){
    float num1, menor, maior, i;
    
    printf("Digite um valor: ");
    scanf("%f" , &num1);

    menor = num1;
    maior = num1;


    for(i = 0; i < 9; i++){
        printf("Digite um valor: ");
        scanf("%f" , &num1);

        if(num1 <= menor){
            menor = num1;
        }else if (num1 > maior){
            maior = num1;
        }
        
    }
    printf("O menor numero digitado eh %.2f e o maior eh %.2f" ,menor , maior);
    return 0;
}