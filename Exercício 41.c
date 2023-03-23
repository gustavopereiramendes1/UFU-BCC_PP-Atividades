#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorHoradetrabalho, horasnoMes, salario;
    printf("Digite o valor da hora de trabalho em reais: ");
    scanf("%f" ,&valorHoradetrabalho);
    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f" , &horasnoMes);
    salario = valorHoradetrabalho * horasnoMes;
    salario += (salario * 0.1);
    printf("O valor a ser pago ao funcionario eh: R$ %.2f\n" ,salario);
    return 0;
}
