#include <stdio.h>

int main(){
    int i, num1;
    num1 = 2;
    for(i = 1; i <= 50; i++){
        
        if(!(num1 %2)){
            printf("%d, " , num1);
        }else{
            i--;
        }
        num1++;
        
    }
    return 0;
}