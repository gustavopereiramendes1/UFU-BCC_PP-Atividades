#include <stdio.h>



typedef struct{
    int dia;
    int mes;
    int ano;
} data;
typedef struct{
    char nome[100];
    char cpf[100];
    int idade;
    char sexo;
    data data_nascimento;
} pessoal;
typedef struct{
    int codigo;
    char cargoAtual[30];
    float salario;
}cargo;
typedef struct{
    pessoal funcionario;
    cargo emprego;
} dados;

int main(){
    dados usuario;

    printf("--Insira os dados do funcionario--\n\n");
    printf("--Insira os dados pessoais--\n\n");
    printf("Nome: ");
    fgets(usuario.funcionario.nome, 100, stdin);
    setbuf(stdin, NULL);
    printf("Idade: ");
    scanf("%d" , &usuario.funcionario.idade);
    setbuf(stdin, NULL);
    printf("CPF: ");
    fgets(usuario.funcionario.cpf, 100, stdin);
    setbuf(stdin, NULL);
    printf("Sexo(F) ou (M): ");
    scanf("%c", &usuario.funcionario.sexo);
    setbuf(stdin, NULL);
    printf("Data de Nascimento: ");
    scanf("%d/%d/%d" , &usuario.funcionario.data_nascimento.dia, &usuario.funcionario.data_nascimento.mes, &usuario.funcionario.data_nascimento.ano);
    setbuf(stdin, NULL);
    printf("\n--Insira os dados sobre o cargo--\n\n");
    setbuf(stdin, NULL);
    printf("Cargo Atual: ");
    setbuf(stdin, NULL);
    fgets(usuario.emprego.cargoAtual, 30, stdin);
    printf("Codigo do Setor(0-99): ");
    scanf("%d" , &usuario.emprego.codigo);
    printf("Salario: ");
    scanf("%f" , &usuario.emprego.salario);
    



    if(!(usuario.funcionario.sexo == 'F' || usuario.funcionario.sexo == 'f' || usuario.funcionario.sexo == 'M' || usuario.funcionario.sexo == 'm')){
        printf("Sexo invalido!\n");
        return 0;
    }

    if((usuario.emprego.codigo < 0) || (usuario.emprego.codigo > 99)){
        printf("[ERRO]: Codigo de Setor invalido!\n");
        return 0;
    }

    printf("--Dados do Funcionario--\n\n");
    printf("Nome: %s" , usuario.funcionario.nome);
    printf("Idade: %d\n" , usuario.funcionario.idade);
    printf("CPF: %s" , usuario.funcionario.cpf);
    printf("Sexo(F) ou (M): %c\n" , usuario.funcionario.sexo);
    printf("Data de Nascimento: %d/%d/%d\n" , usuario.funcionario.data_nascimento.dia, usuario.funcionario.data_nascimento.mes, usuario.funcionario.data_nascimento.ano);
    printf("Cargo Atual: %s", usuario.emprego.cargoAtual);
    printf("Codigo do Setor(0-99): %d\n", usuario.emprego.codigo);
    printf("Salario: R$%.2f\n", usuario.emprego.salario);

    return 0;
}