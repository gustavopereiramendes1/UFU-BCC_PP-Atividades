#include <stdio.h>

int main(){
    int num1, i, j = 0;
    printf("Digite um valor inteiro: ");
    scanf("%d" , &num1);

    for (i = 0; i < num1; i++){
        j++;
        if(j % 2 != 0){
            printf("%d, " , j);
            
        }else
        {
            i--;
        }
        
    }
    

    return 0;
}