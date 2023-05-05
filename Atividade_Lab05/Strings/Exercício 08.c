#include <stdio.h>
#include <string.h>

int main(){
    char palavra[100], letra1, letra2;
    printf("Digite uma string: ");
    setbuf(stdin, NULL);
    gets(palavra);
    int tamanho = strlen(palavra);

    printf("Digite uma letra: ");
    scanf("%c" , &letra1);
    setbuf(stdin, NULL);
    printf("Digite a letra que vai ser substituida: ");
    scanf("%c" , &letra2);
    for (int i = 0; i < tamanho; i++){
        if(palavra[i] == letra2){
            palavra[i] = letra1;
        }
        
    }
    fputs(palavra, stdout);
    return 0;
}