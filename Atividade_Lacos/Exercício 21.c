#include <stdio.h>

int main() {
    int a, b, quant = 0, x;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);

    
    for (int i = a; i <= b; i++) {
        x = 1;
        if (i <= 1) {
            x = 0;
        }
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                x = 0;
                break;
            }
        }
        if (x) {
            quant++;
        }
    }

    printf("Entre %d e %d, existem %d numeros primos.\n", a, b, quant);

    return 0;
}