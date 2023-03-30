#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    const int peso1 = 2, peso2 = 3, peso3 = 5; 
    float nota1, nota2, nota3, media;
    printf("Digite as notas de 0 a 10: \nDigite a nota da primeira prova: ");
    scanf("%f" , &nota1);
    printf("Digite a nota da segunda  prova: ");
    scanf("%f" , &nota2);
    printf("Digite a nota da terceira prova: ");
    scanf("%f" , &nota3);

    if ((nota1>=0 && nota1 <=10) && (nota2>=0 && nota2 <=10) && (nota3>= 0 && nota3 <=10))
    {
    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3))/(peso1 + peso2 + peso3);
    printf("A media ponderada da suas notas foi: %.1f\n" , media);
    
    if(media >=5){
        printf("\nAprovado!");
    }else if(media >= 3 && media <= 4.9){
        printf("\nRecuperacao!");
    }else{
        printf("\nReprovado!");
    }
    }
    
    
    return 0;
}
