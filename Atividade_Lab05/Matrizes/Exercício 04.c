#include <stdio.h>

int main(){
    int mat[5][5], i, j,x, linha[25], coluna[25], qnt= 0;
    for(i = 0; i < 5; i++){
        for (j = 0; j < 5; j++)
        {
            printf("Digite um valor: ");
            scanf("%d" , &mat[i][j]);
        }
        
    }
    printf("Pesquisar: ");
    scanf("%d" , &x);

    for(i = 0; i < 5; i++){
        for (j = 0; j < 5; j++)
        {
            if(x == mat[i][j]){
                qnt++;
                linha[0 + qnt] = i + 1;
                coluna[0 + qnt] = j + 1;

                
            }
        }
        
    }
    if(qnt == 0){
        printf("Nao encontrado!");
    }else{
        printf("%d encontrados: ", qnt );
        for(i = qnt; i > 0; i--){
            printf("Linha: %d, Coluna: %d, " , linha[i], coluna[i]);
        }
    }
    
    return 0;
}