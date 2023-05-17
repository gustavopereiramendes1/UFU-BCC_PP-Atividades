#include <stdio.h>
#include <string.h>
#define NUM_ALUNOS 5
#define MEDIA_MINIMA 5.0
typedef struct{
    char nome[100];
    char matricula[100];
    float media_final;
}aluno;

int main(){
    aluno alunos[NUM_ALUNOS], aprovados[NUM_ALUNOS], reprovados[NUM_ALUNOS]; 
    int j = 0, k = 0; 

    printf("--Insira os dados dos aluno--\n\n");
    for(int i = 0; i < NUM_ALUNOS; i++){
        printf("Nome: ");
        fgets(alunos[i].nome, 100, stdin);
        setbuf(stdin, NULL);
        printf("Matricula: ");
        scanf("%s" , alunos[i].matricula);
        setbuf(stdin, NULL);
        printf("Media Final: ");
        scanf("%f" , &alunos[i].media_final);
        
        if(alunos[i].media_final > 5.0 || alunos[i].media_final == 5.0){
            strcpy(aprovados[j].nome, alunos[i].nome);
            j++;
        
        }else{
            strcpy(reprovados[k].nome, alunos[i].nome);
            k++;
        }
        setbuf(stdin, NULL);
        printf("\n");
    }
    
    printf("\nAlunos aprovados: ");
    for(int i = 0; i< j; i++){
        for(int tamanho = 0; tamanho < strlen(aprovados[i].nome) || tamanho == strlen(aprovados[i].nome); tamanho++){
            if(aprovados[i].nome[tamanho] == '\n'){
                aprovados[i].nome[tamanho] = 'NULL';
            }
        }
        (i + 1 == j)? printf("%s. " , aprovados[i].nome) :printf("%s, " , aprovados[i].nome);
    }
    printf("\nAlunos reprovados: ");
    for(int i = 0; i< k; i++){
        for(int tamanho = 0; tamanho < strlen(reprovados[i].nome) || tamanho == strlen(reprovados[i].nome); tamanho++){
            if(reprovados[i].nome[tamanho] == '\n'){
                reprovados[i].nome[tamanho] = 'NULL';
            }
        }

        (i + 1 == k)? printf("%s. " , reprovados[i].nome) :printf("%s, " , reprovados[i].nome);
    }



    return 0;
}