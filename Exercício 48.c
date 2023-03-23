#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundos, minutos, horas;
    printf("Digite os segundos: ");
    scanf("%d" , &segundos);
    minutos = segundos /60;
    horas = minutos /60;
    minutos = minutos %60;
    segundos = segundos %60;
    printf("\nSao: %d horas, %d minutos e %d segundos\n" , horas, minutos , segundos);
    return 0;
}
