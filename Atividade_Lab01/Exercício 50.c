#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, ano_Atual, ano_nascimento;
    printf("Digite o ano atual, considere ter feito aniversario neste ano: ");
    scanf("%d" ,&ano_Atual);
    printf("Digite a idade: ");
    scanf("%d" ,&idade);
    ano_nascimento = ano_Atual - (idade +1);
    printf("O ano de nascimento eh: %d" , ano_nascimento);
    return 0;
}
