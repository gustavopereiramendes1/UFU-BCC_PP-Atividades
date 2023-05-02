#include <stdio.h>

int main(){
    int vet[50], i, j;

    for(i = 0; i < 50; i++){
        vet[i] = (i + 5 *i)%(i+1);
        
    }
    for(j = 0; j < 50; j++){
        printf("%d, ", vet[j]);
    }
    
    return 0;
}