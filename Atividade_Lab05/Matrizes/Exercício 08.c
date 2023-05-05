#include <stdio.h>


int menu();
void somar(int mat1[][2], int mat2[][2]);
void subtracao(int mat1[][2], int mat2[][2]);
void adicionar(int mat1[][2], int mat2[][2]);
void imprimir(int mat1[][2], int mat2[][2]);


int main(){
    int mat1[2][2], mat2[2][2], i, j, opcao =0, constante;
    
    
    printf("Digite os numeros da primeira matriz: \n");
    for(i=0; i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite um valor: ");
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Digite os numeros da segunda matriz: \n");
    for(i=0; i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite um valor: ");
            scanf("%d", &mat2[i][j]);
        }
    }
    do{
        opcao = menu();

        switch(opcao){
            case 1:
                for(int i = 0; i < 2; i++){
                    for(int j = 0; j < 2; j++){
                    mat1[i][j] += mat2[i][j];
                    }
                }
                break;
            case 2:
                for(int i = 0; i < 2; i++){
                    for(int j = 0; j < 2; j++){
                        mat1[i][j] -= mat2[i][j];
                    }
                }
                break;
            case 3:
                printf("\nDigite uma constante: ");
                scanf("%d" , &constante);
                for(int i = 0; i < 2; i++){
                    for(int j = 0; j < 2; j++){
                        mat1[i][j] += constante;
                        mat2[i][j] += constante;
                    }
                }
                break;
            case 4:
                printf("\n--Primeira Matriz--\n");
                for(int i = 0; i < 2; i++){
                    for(int j = 0; j < 2; j++){
                        printf("[%d]" ,mat1[i][j]);
                    }
                    printf("\n");
                }
                printf("\n--Segunda Matriz--\n");
                for(int i = 0; i < 2; i++){
                    for(int j = 0; j < 2; j++){
                        printf("[%d]" ,mat2[i][j]);
                    }
                    printf("\n");
                }
                break;
        }
    }while(opcao != 4);
    return 0;
}

int menu(){
    int opcao;
    do{
        printf("\n--MENU--\n");
        printf("(1)Soma as duas matrizes\n");
        printf("(2)Subtrair a primeira matriz da segunda\n");
        printf("(3)Adicionar uma constante as duas matrizes\n");
        printf("(4)Imprimir as matrizes\n");

        printf("Digite a opcao desejada: ");
        scanf("%d" , &opcao);
        printf("\n");
        
        
    }while(opcao < 1 || opcao > 4);
    return opcao;
}

/*void somar(int mat1[][2], int mat2[][2]){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            mat1[i][j] += mat2[i][j];
        }
    }
}*/

/*void subtracao(int mat1[][2], int mat2[][2]){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            mat1[i][j] -= mat2[i][j];
        }
    }
}*/
/*void adicionar(int mat1[][2], int mat2[][2]){
    int constante;

    printf("\nDigite uma constante: ");
    scanf("%d" , &constante);
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            mat1[i][j] += constante;
            mat2[i][j] += constante;
        }
    }
}*/
/*void imprimir(int mat1[][2], int mat2[][2]){
    printf("\n--Primeira Matriz--\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("[%d]" ,mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n--Segunda Matriz--\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("[%d]" ,mat2[i][j]);
        }
        printf("\n");
    }
}*/