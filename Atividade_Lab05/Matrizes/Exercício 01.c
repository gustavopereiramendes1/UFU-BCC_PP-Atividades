#include <stdio.h>

int main(){
    int mat[4][4], i, j, cont = 0;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite um valor: ");
            scanf("%d" , &mat[i][j]);
            if(mat[i][j] > 10){
                cont++;
            }
        }
    }
    printf("\nEssa matriz possui %d numeros maiores que 10, sendo eles " , cont);
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(mat[i][j] > 10){
                printf("%d, " , mat[i][j]);
            }
        }
    }
    
    return 0;
}