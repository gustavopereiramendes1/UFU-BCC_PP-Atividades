#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade, tempo_servico, aposentadoria = 65;
    printf("Digite a idade: ");
    scanf("%d" , &idade);
    printf("Digite o tempo de servico: ");
    scanf("%d" , &tempo_servico);

    if(idade >= aposentadoria || tempo_servico >= 30 || (idade >= 60 && tempo_servico >= 25)){
        printf("Pode aposentar!");
    }else{
        printf("Nao pode aposentar ainda!");
    }
    return 0;
}
