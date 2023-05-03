#include <stdio.h>

int main()
{
    int mat[4][4], i ,j, maior = 0, linhaM, colunaM;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite um numero: ");
            scanf("%d" , &mat[i][j]);
            if(mat[i][j] > maior){
                maior = mat[i][j];
                linhaM = i;
                colunaM = j;
            }
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("[%d]" , mat[i][j]);
        }
        printf("\n");
    }

    printf("O maior numero eh: %d, e esta na linha %d e na coluna %d " , maior, linhaM+1, colunaM+1);
    return 0;
}
