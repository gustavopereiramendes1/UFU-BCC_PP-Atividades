#include <stdio.h>


int Fdobro(int a);

int main(){
    int a, dobro;

    printf("Digite um numero: ");
    scanf("%d" , &a);

    //dobro = Fdobro(a);
    printf("\nO dobro de %d eh: %d.\n", a, Fdobro(a));
    return 0;
}
int Fdobro(int a){
    return a * 2;
}