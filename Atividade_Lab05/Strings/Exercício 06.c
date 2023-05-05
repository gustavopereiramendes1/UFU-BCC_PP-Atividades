#include <stdio.h>
#include <string.h>

int main(){
    char palavra[100];
    int i, tamanho;

    printf("Digite uma palavra: ");
    setbuf(stdin, NULL);
    fgets(palavra, 100, stdin);
    tamanho = strlen(palavra);

    for(i = 0; i < tamanho - 1; i++){
        palavra[i] -= 32;        
    }

    fputs(palavra, stdout);
    return 0;
}