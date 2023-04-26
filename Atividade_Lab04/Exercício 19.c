#include <stdio.h>

int fatorial_num(int num);

int main(){
    int num, resfatorial;

    printf("Digite um numero: ");
    scanf("%d" ,&num);

    resfatorial = fatorial_num(num);

    printf("O fatorial de %d eh: %d" ,num ,resfatorial);
    return 0;
}
int fatorial_num(int num){
    if(num == 1){
        return 1;
    }
    return num * fatorial_num(num - 1);

    
}