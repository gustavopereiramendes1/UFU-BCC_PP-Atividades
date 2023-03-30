#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float salario, valor_de_prestacao;
    printf("Digite o salario: ");
    scanf("%f" , &salario);
    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%f" , &valor_de_prestacao);

    if(valor_de_prestacao > (0.2 * salario)){
        printf("\nEmprestimo nao concedido!\n");
    }else{
        printf("\nEmprestimo concedido!\n");
    }
    return 0;
}
