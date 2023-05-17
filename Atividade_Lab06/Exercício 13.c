#include <stdio.h>
#include <string.h>

typedef struct{
    int dia, mes, ano;
}data;
typedef struct{
    char rua[100];
    char bairro;
    int num;
    char cidade;
}localizacao;
typedef struct{
    char nome[100];
    char CEP[100];
    data data_nascimento;
    localizacao endereco;
    char email[100];
}dados;

int verifica_data(dados usuario);
int verifica_email(dados usuario);
int verifica_CEP(dados usuario);
int main(){
    dados usuario;

    printf("--Insira seus dados pessoais--\n\n");
    printf("Nome: ");
    fgets(usuario.nome, 100, stdin);
    setbuf(stdin, NULL);
    printf("CEP(apenas numeros): ");
    fgets(usuario.CEP, 100, stdin);
    setbuf(stdin, NULL);
    printf("Data de nascimento: ");
    scanf("%d/%d/%d" , &usuario.data_nascimento.dia, &usuario.data_nascimento.mes, &usuario.data_nascimento.ano);
    setbuf(stdin, NULL);
    /*printf("Endereco(ex. Bairro, rua, numero): ");
    scanf("%s, %s, %d" , usuario.endereco.bairro, usuario.endereco.rua, &usuario.endereco.num);
    setbuf(stdin, NULL);*/
    printf("Email: ");
    fgets(usuario.email, 100, stdin);

    
    
    

    if(verifica_data(usuario) && verifica_email(usuario) && verifica_CEP(usuario)){
        printf("\n\n--Dados do Usuario--\n");
        printf("Todos os dados estao corretos\n\n");
        printf("Nome: %s" , usuario.nome);
        printf("CEP: %s" , usuario.CEP);
        printf("Data de nascimento: %d/%d/%d\n" , usuario.data_nascimento.dia, usuario.data_nascimento.mes, usuario.data_nascimento.ano);
        printf("Email: %s" ,usuario.email);
    }else if(!(verifica_data(usuario))){
        printf("[ERRO]: DATA INVALIDA!");
        return 0;
    }else if(!(verifica_email(usuario))){
        printf("[ERRO]: EMAIL INVALIDO!");
        return 0;
    }else if(!(verifica_CEP(usuario))){
        printf("[ERRO]: CEP INVALIDO!");
        return 0;
    }

    return 0;
}
int verifica_data(dados usuario){
    int ano_atual = 2023, qntdias, ano_bissexto;
    if((!(usuario.data_nascimento.ano%400)) || ((!(usuario.data_nascimento.ano%4)) && (usuario.data_nascimento.ano%100 != 0))){
        ano_bissexto = 1;                       //verifica se o ano é bissexto
    }else{
        ano_bissexto = 0;
    }
    
    if(((!(usuario.data_nascimento.mes%2)) && usuario.data_nascimento.mes < 7 && usuario.data_nascimento.mes != 2) || ((usuario.data_nascimento.mes%2) && usuario.data_nascimento.mes > 7)){
        qntdias = 30;            //se o mes for um par menor que 7 (abril, junho) ou se o mes for um impar maior que 7 (setembro, novembro)
    }else{
        qntdias = 31;
    }
    if(usuario.data_nascimento.mes == 2){       //atribui a quantidade de dias do mes de fevereiro, quando é bissexto ou não
        if(ano_bissexto){
            qntdias = 29;
        }else{
            qntdias = 28;
        }
        
    }
    if(usuario.data_nascimento.dia > qntdias || usuario.data_nascimento.dia < 1){  //verifica se o dia é valido
        return 0;
    }
    if (usuario.data_nascimento.mes > 12){                                          //verifica se o mes é valido
        return 0;
    }
    if(usuario.data_nascimento.ano > ano_atual){                                    //verifica se o ano é valido
        return 0;
    }
    return 1;
}
int verifica_email(dados usuario){
    int i, j;

    for(i = 0; usuario.email[i] != '\0'; i++){
        if(usuario.email[i] == '@'){
            break;
        }
    }
    for(j = 0; j < i; j++){
        if((usuario.email[j] > ('A' -1) && usuario.email[j] < ('Z' +1)) || (usuario.email[j] > ('a' -1) && usuario.email[j] < ('z' +1)) || (usuario.email[j] == '.') || ((usuario.email[j]) > ('0' -1) && (usuario.email[j]) < ('9' +1))){
            continue;
        }else{
            return 0;
        }
    }
    return 1;
}
int verifica_CEP(dados usuario){
    
    if(strlen(usuario.CEP) > 8){
        return 0;
    }
    for(int i = 0; i < 8; i++){
        if (usuario.CEP[i] < '0' || usuario.CEP[i] > '9'){
            return 0;
        }
    }
    return 1;
}