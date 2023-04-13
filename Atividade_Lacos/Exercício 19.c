#include <stdio.h>

int main() {
    int saque, nota = 100, count;
    printf("Digite o Valor do saque: ");
    scanf("%d", &saque);

    while (saque > 0) {
        count = saque / nota;
        if (count > 0) {
            printf("\nNotas R$ %d: %d \n", nota, count);
            saque -= count * nota;
        }
        if (nota == 100) nota = 50;
        else if (nota == 50) {
            nota = 20;
        }
        else if (nota == 20){
            nota = 10;
        }
        else if (nota == 10){
            nota = 5;
        }
        else if (nota == 5){
            nota = 2;
        }
        else {
            nota = 1;
        }
    }

    return 0;
}