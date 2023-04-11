#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioBase, porcensalarioImposto, porcensalariograt, salariofinal;
    printf("Digite o salario-base do funcionario: ");
    scanf("%f" , &salarioBase);
    porcensalarioImposto = salarioBase * 0.07;
    porcensalariograt = salarioBase * 0.05;
    salariofinal = salarioBase + porcensalariograt - porcensalarioImposto;
    printf("O salario que o funcionario ira receber eh: R$ %.2f\nDesconto do Imposto de renda: R$ %.2f\nGratificacao: R$ %.2f\n" , salariofinal, porcensalarioImposto,porcensalariograt);
    return 0;
}
