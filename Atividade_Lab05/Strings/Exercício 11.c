#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, tamanho;

    printf("Digite uma string: ");
    scanf("%s", str);

    printf("Digite i e j: ");
    scanf("%d %d", &i, &j);
    tamanho = strlen(str);

    if (i < 0 || j > tamanho) {
        printf("Indices invalidos.\n");
        return 0;
    }

    printf("Segmento S[%d..%d]: ", i, j);

    for (int k = i; k <= j; k++) {
        printf("%c", str[k]);
    }

    printf("\n");

    return 0;
}
