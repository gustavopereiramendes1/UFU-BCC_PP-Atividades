#include <stdio.h>
#define NUM_LIVROS 3
typedef struct{
    char Titulo[31];
    int ano;
    char autor[16];
}dados;

int main(){
    dados livro[NUM_LIVROS];
    char titulo[31];
    int qnt = 0, corresponde, j;

    printf("--Insira os dados dos livros--\n\n");
    for(int i = 0; i < NUM_LIVROS; i++){
        printf("--Livro %d--\n" , i+1);
        printf("Titulo: ");
        fgets(livro[i].Titulo, 31, stdin);
        setbuf(stdin, NULL);
        printf("Ano: ");
        scanf("%d" , &livro[i].ano);
        setbuf(stdin, NULL);
        printf("Autor: ");
        fgets(livro[i].autor, 16, stdin);
        setbuf(stdin, NULL);
        printf("\n");
        
    }
    
    printf("Digite o titulo do livro: ");
    fgets(titulo, 31, stdin);

    printf("--livros encontrados--\n\n");
    for(int i = 0; i < NUM_LIVROS; i++){
        corresponde = 0;
        for(j = 0; titulo[j] != '\0'; j++){
            if(titulo[j] == livro[i].Titulo[j]){
                corresponde++;
            }
        }
        if(corresponde == j - 1){
            printf("livro %d:\n" , qnt +1);
            printf("Titulo: %s" ,livro[i].Titulo);
            printf("Ano: %d\n", livro[i].ano);
            printf("Autor: %s" , livro[i].autor);
            qnt++;
            printf("\n\n");
        }
        
        
        
    }
    if(qnt == 0){
        printf("Titulo nao encontrado!");
    }
    return 0;
}
