#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundos, minutos, horas, inicio_seg, duracao, termino_seg;
    printf("Digite o horario de inicio do experimento. \nex.(horas, minutos , segundos): ");
    scanf("%d, %d, %d" , &horas, &minutos, &segundos);
    printf("Digite a duracao do experimento em segundos: ");
    scanf("%d" , &duracao);
    inicio_seg = segundos + (minutos * 60) + (horas * 3600);
    termino_seg = duracao + inicio_seg;
    minutos = termino_seg /60;
    horas = minutos / 60;
    minutos = minutos %60;
    segundos = termino_seg %60;

    printf("\nHorario de termino eh: %d horas, %d minutos e %d segundos\n" , horas, minutos , segundos);
    return 0;
}
