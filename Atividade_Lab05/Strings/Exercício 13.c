#include <stdio.h>
#include <string.h>

int main(){
    char string_normal[100], string_sub[100];
    int tamanho, palindromo;

    printf("Digite uma string: ");
    setbuf(stdin, NULL);
    fgets(string_normal, 100, stdin);
    tamanho = strlen(string_normal);
    

    if (string_normal[tamanho-1] == '\n') {
        string_normal[--tamanho] = '\0';
    }

    for(int i = 0, j = tamanho -1; i < j; i++, j--){
        string_sub[i] = string_normal[i];
        string_normal[i] = string_normal[j];
        string_normal[j] = string_sub[i];
    }
    palindromo = 1;
    for (int i = 0; i < tamanho; i++) {
        if(string_normal[i] != ','){
            if (string_normal[i] != string_normal[tamanho-1-i]) {
            palindromo = 0;
            break;
            }
        }
        
    }
    if(palindromo){
        printf("Eh palindromo!");
    }else{
        printf("Nao eh palindromo!");
    }

    return 0;

}
    
