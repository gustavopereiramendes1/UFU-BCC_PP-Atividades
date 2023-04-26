#include <stdio.h>

int quant_primos(int num);

int main(){
    int num, quant;
    printf("Digite um numero: ");
    scanf("%d" , &num);

    quant = quant_primos(num);

    printf("A quantidade de numeros primos eh: %d" , quant);
    return 0;
}
int quant_primos(int num){
    int i, j, cont = 0, primos = 0;

    
    for(i = 2; (i < num) || (i == num); i++){
        cont = 0;
        for(j = 1; (j < i) || (j == i); j++){
            
            if(!(i % j)){
                cont++;
            }
            if(cont > 2){
                break;
            }
            if(i > 10){
                if(!(i % 2) || !(i % 3) || !(i % 5) || !(i % 7)){               
                break;
                }
            }
        }  
        if(cont == 2){
            primos++;
        } 
    }
    return primos;
}