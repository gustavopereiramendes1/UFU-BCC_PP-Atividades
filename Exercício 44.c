#include <stdio.h>
#include <stdlib.h>

int main()
{
    float degrauAl,altura;
    int degraus;
    printf("Digite a altura do degrau: ");
    scanf("%f" , &degrauAl);
    printf("Digite a altura que deseja alcancar: ");
    scanf("%f" , &altura);
    degraus = altura / degrauAl;
    printf("Para alcancar a altura desejada o usuario tera que subir %.2d degraus.\n" ,degraus);
    return 0;
}
