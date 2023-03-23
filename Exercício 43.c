#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorTotal, pagadesconto, parcela, comivista, comiparce;
    printf("Digite o valor total: ");
    scanf("%f" ,&valorTotal);
    pagadesconto = valorTotal - (valorTotal * 0.1);
    parcela = valorTotal /3;
    comivista = pagadesconto * 0.05;
    comiparce = valorTotal * 0.05;
    printf("O total a pagar com desconto eh: R$ %.2f\nO valor de cada parcela, em um parcelamento de 3x sem juros eh: R$ %.2f\nA comissao do vendedor, no caso da venda a vista eh: R$ %.2f\nA comissao do vendedor, no caso da venda parcelada eh: R$ %.2f\n", pagadesconto, parcela, comivista,comiparce);
    return 0;
}
