#include <stdio.h>
#define NUM_Alunos 5

struct dados_aluno{
    char nome[100];
    char matricula[100];
    char curso[100];
};
typedef struct dados_aluno dados_aluno;

int main(){
    dados_aluno aluno[NUM_Alunos];


    for(int i = 0; i < NUM_Alunos; i++){
        printf("--Dados Aluno--");
        printf("\nNome: ");
        fgets(aluno[i].nome, 100, stdin);
        printf("Matricula: ");
        fgets(aluno[i].matricula, 100, stdin);
        printf("Curso: ");
        fgets(aluno[i].curso, 100, stdin);
    }

    printf("--Dados--");
    
    for(int i = 0; i < NUM_Alunos; i++){
        printf("\nAluno [%d]\n" , i +1);
        printf("%s%s%s" ,aluno[i].nome , aluno[i].matricula, aluno[i].curso);
        printf("\n");
    }
    
    return 0;
}