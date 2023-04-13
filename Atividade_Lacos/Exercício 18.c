#include <stdio.h>


int main() {
    double salario = 2000;
    float aumento;
    int ano, ano_atual;
    printf("Digite o ano atual: ");
    scanf("%d" , &ano_atual);

    for(ano = 1996; ano <= ano_atual; ano++){
        if(ano == 1996){
            aumento = 0.015;
            salario += salario * aumento;
        }else{
            aumento *= 2;
            salario += salario * aumento;
        }
    }
    printf("O salario atual do funcionario eh: R$%.2lf" ,salario);
    return 0;
}