#include <stdio.h>

int main(){
    int a, b;
    int *a1 = &a, *b1 = &b;

    printf("Digite dois numero inteiros: ");
    scanf("%d%d" , &a, &b);

    *a1 = ((*a1)*2);
    *b1 = ((*b1)*2);

    printf("A soma do dobro dos dois numeros: %d\n" , *a1 + *b1);
    return 0;
}
