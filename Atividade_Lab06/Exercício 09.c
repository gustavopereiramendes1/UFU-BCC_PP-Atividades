#include <stdio.h>
#include <math.h>

typedef struct{
    float real;
    float img;
}numero;

int main(){
    numero z, w, soma, sub, produto;
    float modulo_z, modulo_w;

    printf("--Numero complexo--\n");
    printf("Digite a parte real do primeiro numero: ");
    scanf("%f" , &z.real);
    printf("Digite a parte imaginaria do primeiro numero: ");
    scanf("%f" , &z.img);
    printf("Digite a parte real do segundo numero: ");
    scanf("%f" , &w.real);
    printf("Digite a parte imaginaria do segundo numero: ");
    scanf("%f" , &w.img);

    soma.real = z.real + w.real;
    soma.img =  z.img + w.img;
    sub.real = z.real - w.real;
    sub.img =  z.img - w.img;
    produto.real = z.real * w.real - z.img * w.img;
    produto.img = z.real * w.img + z.img * w.real;
    modulo_z = sqrt(pow(z.real, 2) + pow(z.img, 2));
    modulo_w = sqrt(pow(w.real, 2) + pow(w.img, 2));

    printf("\nSoma: %.2f + %.2fi", soma.real, soma.img);
    printf("\nSubtracao: %.2f %.2fi", sub.real, sub.img);
    printf("\nProduto: %.2f + %.2fi", produto.real, produto.img);
    printf("\nModulo de z: %.2f", modulo_z);
    printf("\nModulo de w: %.2f", modulo_w);

}