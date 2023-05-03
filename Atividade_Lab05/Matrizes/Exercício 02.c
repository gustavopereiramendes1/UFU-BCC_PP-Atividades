#include <stdio.h>

int main(){
    int mat[5][5], i, j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            mat[i][j] = 0;
        }
    }
    for(i = 0; i < 5; i++){
        for(j = i; j < 5; j++){
            mat[i][j] = 1;
            break;
        }
    }
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("[%d]" , mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}