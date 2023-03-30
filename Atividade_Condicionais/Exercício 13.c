#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    const int peso1 = 1, peso2 = 2; 
    float nota1, nota2, nota3, media;
    printf("Digite a nota da primeira prova: ");
    scanf("%f" , &nota1);
    printf("Digite a nota da segunda  prova: ");
    scanf("%f" , &nota2);
    printf("Digite a nota da terceira prova: ");
    scanf("%f" , &nota3);

    media = ((nota1 * peso1) + (nota2 * peso1) + (nota3 * peso2))/(peso1 + peso2 + peso1);
    printf("A media ponderada da suas notas foi: %.1f\n" , media);
    if(media >=60){
        printf("Aprovado!");
    }else{
        printf("Reprovado!");
    }
    return 0;
}
