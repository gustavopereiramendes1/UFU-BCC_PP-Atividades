#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int verifica_num(int bingo[][5], int numnovo);

int main(){
    int bingo[5][5], i , j, numnovo;

    srand(time(NULL));

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            do{
                numnovo = rand()%99;
                
            } while(verifica_num(bingo, numnovo));
            bingo[i][j] = numnovo;
        }
    }
    for(i=0; i<5;i++){
        for(j=0;j<5;j++){
            printf("[%-2d]" ,bingo[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int verifica_num(int bingo[][5], int numnovo){
    int x, y;
    
    for(x = 0; x < 5; x++){
        for(y = 0; y < 5; y++){
            
            if(bingo[x][y] == numnovo){
                return 1;
            }
        
        }
    
    }
    return 0;
}