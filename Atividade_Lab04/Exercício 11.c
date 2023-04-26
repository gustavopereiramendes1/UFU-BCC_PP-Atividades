#include <stdio.h>

float media_aluno(float nota1, float nota2, float nota3, char letra);

int main(){
    float nota1,  nota2,  nota3;
    char letra;

    printf("Digite a primeira nota: ");
    scanf("%f" ,&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f" ,&nota2);
    printf("Digite a terceira nota: ");
    scanf("%f" ,&nota3);
    printf("Digite o tipo de media [P] ou [A]: ");
    scanf(" %c" ,&letra);

    if(letra == 'A' || letra =='a'){
        printf("A media aritmetica eh: %.2f" , media_aluno(nota1, nota2, nota3, letra));
    }else if (letra == 'P'|| letra =='p'){
        printf("A media ponderada eh: %.2f" , media_aluno(nota1, nota2, nota3, letra));
    }else{
        printf("[ERRO]: Tipo de media invalida!");
    }
    
    return 0;
}
float media_aluno(float nota1, float nota2, float nota3, char letra){

    float media;
    int peso1 = 5, peso2 = 3, peso3 = 2;

    if(letra == 'A' || letra =='a'){
        media = (nota1 + nota2 + nota3)/3;
        return media;
    }else{
        media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3))/(peso1 + peso2 + peso3);
        return media;   
    }
}