#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    float valor, comissao;
    printf("Qual foi o valor da venda? ");
    scanf("%f" , &valor);

    if(valor >= 100000){
        comissao = 700 + (0.16 * valor);
        printf("A comissao vai ser: R$ %.2f" , comissao);
    }else if (valor < 100000 && valor >= 80000)
    {
        comissao = 650 + (0.14 * valor);
        printf("A comissao vai ser: R$ %.2f" , comissao);
    }else if (valor < 80000 && valor >= 60000)
    {
        comissao = 600 + (0.14 * valor);
        printf("A comissao vai ser: R$ %.2f" , comissao);
    }else if (valor < 60000 && valor >= 40000)
    {
        comissao = 550 + (0.14 * valor);
        printf("A comissao vai ser: R$ %.2f" , comissao);
    }else if (valor < 40000 && valor>= 20000)
    {
        comissao = 500 + (0.14 * valor);
        printf("A comissao vai ser: R$ %.2f" , comissao);
    }else if (valor < 20000)
    {
        comissao = 400 + (0.14 * valor);
        printf("A comissao vai ser: R$ %.2f" , comissao);
    }else{
        printf("Valor invalido!");
    }
    
    
    
    
    
    return 0;
}
