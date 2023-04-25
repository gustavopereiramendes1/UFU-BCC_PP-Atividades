#include <stdio.h>

int quanti_seg(int horas, int minutos);

int main(){
    int horas, minutos, segundos;
    printf("Digite quantas horas: ");
    scanf("%d" ,&horas);
    printf("Digite quantos minutos: ");
    scanf("%d" ,&minutos);
    printf("Digite quantos segundos: ");
    scanf("%d" ,&segundos);

    segundos += quanti_seg(horas, minutos);

    printf("A quantidade de segundos eh: %d" ,segundos);
    return 0;
}
int quanti_seg(int horas, int minutos){
    int seg;
    seg = (horas * 3600) + (minutos * 60);
    return seg;
    
}