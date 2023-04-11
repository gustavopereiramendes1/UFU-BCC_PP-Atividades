#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, aumento = 0.25, salariofinal;
    printf("Digite o salario do funcionario: ");
    scanf("%f" ,&salario);
    salariofinal = salario + (salario * aumento);

    printf("Se ele ganhar um aumento de 25 por cento, o salario dele sera: %.2f\n" ,salariofinal);
    return 0;
}
