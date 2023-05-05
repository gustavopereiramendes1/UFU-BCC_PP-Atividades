#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int mat[4][4], i , j;

    srand(time(NULL));

    for(i=0; i<4;i++){
        for(j=0;j<4;j++){
            mat[i][j] = 1 + rand()%20;
        }
    }
    printf("--Matriz Original--\n");
    for(i=0; i<4;i++){
        for(j=0;j<4;j++){
            printf("[%-2d]" ,mat[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<4;i++){
        for(j = i +1; j<4;j++){
            mat[i][j] = 0;
        }
    }
    printf("--Matriz Transformada--\n");
    for(i=0; i<4;i++){
        for(j=0;j<4;j++){
            printf("[%-2d]" ,mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}