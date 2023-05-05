#include <stdio.h>
#include <string.h>

int main(){
    char palavra[100], x, vogais[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int i, qnt = 0, tamanho, j;

    printf("Digite uma palavra: ");
    setbuf(stdin, NULL);
    fgets(palavra, 100, stdin);
    tamanho = strlen(palavra);

    
   
    printf("\nDigite o caractere (vogal ou consoante) que ira substituir as vogais: ");
    scanf("%c" , &x);
    
    for(i = 0; i < tamanho || i == '\0'; i++){
        for(j = 0; j < 10; j++){
            if(palavra[i] == vogais[j]){
                qnt++;
                palavra[i] = x;
            }
        }
        
    }

    fputs(palavra, stdout);
    return 0;
}