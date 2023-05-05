#include <stdio.h>
#include <string.h>

int main(){
    char palavra[100];
    printf("Digite uma palavra: ");
    setbuf(stdin, NULL);
    gets(palavra);
    int tamanho = strlen(palavra);
    for (int i = 0; i < tamanho; i++)
    {
        if (palavra[i] == ' ')
        {
            continue;   
        }
        printf("%c",palavra[i]);
    }
    return 0;
}