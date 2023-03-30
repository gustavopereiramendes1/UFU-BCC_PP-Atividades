#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float nota1, nota2, notavalida, media;

    printf("Digite a primeira nota: ");
    scanf("%f" ,&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f" , &nota2);
    if((nota1 >= 0.0 && nota1 <= 10.0) &&(nota2>=0.0 && nota2 <= 10.0)){
        media = (nota1 + nota2)/2;
        printf("A media das notas eh: %.1f" , media);
    }else{
        printf("Valor de nota invalido!");
    }
    return 0;
}
