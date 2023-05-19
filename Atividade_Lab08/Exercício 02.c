#include <stdio.h>

int main(){
    int x, y;
    int* x1 = &x, *y1 = &y;
    
    if(x1 > y1){
        printf("O maior endereco eh de x: %p\n" , x1);
    }else{
        printf("O maior endereco eh de y: %p\n" , y1);
    }
    return 0;
}