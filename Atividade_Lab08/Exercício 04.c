#include <stdio.h>

int main(){
    int x, y;
    int* x1 = &x, *y1 = &y;

    printf("Digite um valor: ");
    scanf("%d" , &x);
    printf("Digite outro valor: ");
    scanf("%d" , &y);
    
    if(x1 > y1){
        printf("A valor com o maior endereco eh: %d\n" , x);
    }else{
        printf("A valor com o maior endereco eh: %d\n" , y);
    }
    return 0;
}
