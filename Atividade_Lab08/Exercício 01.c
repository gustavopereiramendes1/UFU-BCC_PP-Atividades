#include <stdio.h>

int main(){
    int x; 
    float y; 
    char z;
    int* x1; float* y1; char* z1;
    printf("Digite um valor: ");
    scanf("%d", &x);
    printf("Digite outro valor: ");
    scanf("%f" , &y);
    setbuf(stdin, NULL);
    printf("Digite um caracter: ");
    scanf("%c" , &z);
    x1 = &x;
    y1 = &y;
    z1 = &z;
    printf("x = %d\ny = %.2f\nz = %c\n\n", x,y,z);
    (*x1)++;
    (*y1)++;
    (*z1)++;
    
    printf("x = %d\ny = %.2f\nz = %c\n", x,y,z);
    
}