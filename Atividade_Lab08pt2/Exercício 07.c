#include <stdio.h>

int main(){
    int vet[10], *p1 = &vet[0], min, max = 0, *p2 = &min, *p3 = &max, i;

    for(i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d" , p1+i);
    }
    *p2 = *p1;
    for(i = 0; i < 10; i++){
        if(*(p3) < *(p1 + i)){
            *p3 = *(p1 +i);
        }
        if(*(p1 + i) < *p2){
            *p2 = *(p1 + i);
        }
    }
    printf("O maior numero eh: %d\n" , *p3);
    printf("O menor numero eh: %d\n" , *p2);
    return 0;
}