#include <stdio.h>
#include <string.h>


int main() {
    char palavra[44];
    int i, tamanho;

    printf("Digite uma palavra: ");
    fgets(palavra, 44, stdin);
    tamanho = strlen(palavra);

    
    for(i = tamanho - 1; i > 0 || i == 0 ;i--){
        printf("%c" , palavra[i]);
    }
    return 0;
}