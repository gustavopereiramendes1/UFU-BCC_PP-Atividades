#include <stdio.h>

struct dados_pessoais{
    char nome[100];
    int idade;
    char endereco[100];
};
typedef struct dados_pessoais dados_pessoais;
int main(){
    dados_pessoais dados;

    printf("--Dados Pessoais--\n");
    printf("\nNome: ");
    scanf("%s" , dados.nome);
    printf("Idade: ");
    scanf("%d" , &dados.idade);
    printf("Endereco: ");
    setbuf(stdin, NULL);
    fgets(dados.endereco, 100, stdin);

    printf("Dados pessoais: \n");
    printf("\nNome: %s" , dados.nome);
    printf("\nIdade: %d" , dados.idade);
    printf("\nEndereco: ");
    fputs(dados.endereco, stdout);
    return 0;
}