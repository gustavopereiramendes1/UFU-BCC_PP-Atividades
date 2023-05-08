#include <stdio.h>
#define Num_alunos 2   //numero de alunos
struct dados_aluno{         
    char nome[100];
    char matricula[100];
    char curso[100];
    int notas[3];
};
typedef struct dados_aluno dados_aluno;         //muda o nome do tipo

int calcular_media(dados_aluno *alunos, int i);
int maior_nota1(dados_aluno *alunos, int i, int maior);
int status(int i, int *media);
int calcular_maiorMedia(int *media, int maior_media);
int calcular_menorMedia(int *media, int menor_media);
void imprimir_dados(dados_aluno *alunos, int *media, int maior_media, int menor_media, int maior);
int main(){
    dados_aluno alunos[Num_alunos];
    int i, media[Num_alunos], maior = 0, menor_media = 0, maior_media  = 0;

    for(i = 0; i < Num_alunos; i++){                //Loop para digitar os dados de 5 alunos
        int j = 0;
        printf("--Dados Alunos--");
        printf("\nNome: ");
        setbuf(stdin, NULL);
        fgets(alunos[i].nome, 100, stdin);
        printf("Matricula: ");
        setbuf(stdin, NULL);
        fgets(alunos[i].matricula, 100, stdin);
        printf("Curso: ");
        setbuf(stdin, NULL);
        fgets(alunos[i].curso, 100, stdin);
        printf("Notas (ex. 10 7 9): ");
        
        scanf("%d%d%d" , &alunos[i].notas[j], &alunos[i].notas[j+1], &alunos[i].notas[j+2]);
        
        media[i] = calcular_media(alunos, i);
        maior = maior_nota1(alunos, i, maior);
        
    }
    menor_media = media[0];
    maior_media = calcular_maiorMedia(media, maior_media);
    menor_media = calcular_menorMedia(media, menor_media);
      
    imprimir_dados(alunos, media, maior_media, menor_media, maior);

    return 0;
}
int calcular_media(dados_aluno *alunos, int i){              //Calcula a media das 3 notas do aluno
    int media = 0, soma = 0, k = 0;
    
    soma = (alunos[i].notas[k] + alunos[i].notas[k+1] + alunos[i].notas[k+2]);
    media = soma/3;
    return media;
}
int maior_nota1(dados_aluno *alunos, int i, int maior){
    if(alunos[i].notas[0] > maior){
        maior = alunos[i].notas[0];
    }
    return maior;
}
int status(int i, int *media){     //verifica os status do aluno(aprovado ou reprovado)
    if(media[i] < 6){                         //retorna 1 para aprovado ou retorna 0 para reprovado
        return 0;
    }else{
        return 1;
    }
}
int calcular_maiorMedia(int *media, int maior_media){         //verifica a maior media entre as medias de notas dos alunos
    int j;                                                                 
    for(j = 0; j < Num_alunos; j++){
        if(media[j] > maior_media){
            maior_media = media[j];
        }
    }
    return maior_media;
}
int calcular_menorMedia(int *media, int menor_media){         // verifica a menor media entre as medias de notas
    int j;
    for(j = 0; j < Num_alunos; j++){
        if(media[j] < menor_media){
            menor_media = media[j];
        }
    }
    return menor_media;
}

void imprimir_dados(dados_aluno *alunos, int *media, int maior_media, int menor_media, int maior){
    int i, j, aluno_maior_media = 0, aluno_menor_media = 0, maior_nota_primeiro = 0;
    for(i = 0; i < Num_alunos; i++){
        status(i, media);
        if(status( i, media)){           //Caso retorne 1 = Aprovado
            printf("\n\n--Alunos--\n");             //Caso retorne 0 = Reprovado
            printf("Nome: ");
            fputs(alunos[i].nome, stdout);
            printf("Matricula: ");
            fputs(alunos[i].matricula, stdout);
            printf("Curso: ");
            fputs(alunos[i].curso, stdout);
            for(j = 0; j < 3; j++){
                printf("\nNota %d: %d" , j+1, alunos[i].notas[j]);
            }
            printf("\nStatus: APROVADO");
        }
        if(!(status(i, media))){
            printf("\n\n--Alunos--\n");             //Caso retorne 0 = Reprovado
            printf("Nome: ");
            fputs(alunos[i].nome, stdout);
            printf("Matricula: ");
            fputs(alunos[i].matricula, stdout);
            printf("Curso: ");
            fputs(alunos[i].curso, stdout);
            for(j = 0; j < 3; j++){
                printf("\nNota %d: %d" , j +1, alunos[i].notas[j]);
            }
            printf("\nStatus: REPROVADO");
        }
        if(media[i] == maior_media){
            aluno_maior_media = i;
        }
        if(media[i] == menor_media){
            aluno_menor_media = i;
        }
        if(alunos[i].notas[0] == maior){
            maior_nota_primeiro = i;
        }
    }
    printf("\nMaior nota na primeira prova: %d --" , maior);
    printf(" Aluno que tirou a nota: ");
    printf("%s" ,alunos[maior_nota_primeiro].nome);
    printf("\nMaior media geral eh: %d - Aluno: %s" , maior_media, alunos[aluno_maior_media].nome);
    printf("\nMenor media geral eh: %d - Aluno: %s" , menor_media, alunos[aluno_menor_media].nome);
    
    
                             
}
