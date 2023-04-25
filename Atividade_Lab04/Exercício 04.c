#include <stdio.h>
#include <math.h>


int verica_quadrado(int num1, int i);

int main(){
    int num1, i = 1;

    printf("Digite um numero: ");
    scanf("%d" , &num1);

    
    if(verica_quadrado(num1, i)){
        printf("O numero %d eh um quadrado perfeito", num1);
        
    }else{
        printf("O numero %d nao eh um quadrado perfeito" ,num1);
    }
    return 0;
}
int verica_quadrado(int num1, int i){
    if (num1 == 1){
        return 1;
    }else if(num1 > 0){
        for(i = 1; i != num1; i++){
            if(i * i == num1){

                return 1;
                
            }
        }
        return 0;
    }else{
        return 0;
    }
}
