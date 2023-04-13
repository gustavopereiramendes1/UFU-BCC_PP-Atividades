#include <stdio.h>

int main() {
    int x, i, j, num = 1;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &x);
    
    for (i = 1; i <= x; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    
    return 0;
}