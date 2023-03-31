#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    float custo_fabri, custo_consu, percen_distri, percen_impos;
    printf("Digite o custo da fabrica: ");
    scanf("%f", &custo_fabri);

    if(custo_fabri <= 12000){
        percen_distri = 0.05;
        percen_impos = 1;
        custo_consu = custo_fabri + (custo_fabri * percen_distri) + (custo_fabri *percen_impos);
        printf("O custo ao consumidor de um carro novo eh: R$ %.2f\n" , custo_consu);
    }else if (custo_fabri >= 12000 && custo_fabri <= 25000)
    {
        percen_distri = 0.1;
        percen_impos = 0.15;
        custo_consu = custo_fabri + (custo_fabri * percen_distri) + (custo_fabri *percen_impos);
        printf("O custo ao consumidor de um carro novo eh: R$ %.2f\n" , custo_consu);
    }else {
        percen_distri = 0.15;
        percen_impos = 0.2;
        custo_consu = custo_fabri + (custo_fabri * percen_distri) + (custo_fabri *percen_impos);
        printf("O custo ao consumidor de um carro novo eh: R$ %.2f\n" , custo_consu);
    }
    
    return 0;
}
