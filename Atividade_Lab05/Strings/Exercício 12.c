#include <stdio.h>
#include <string.h>

int main(){
    char string_A[100];
    int i, tamanho;

    printf("Digite uma string: ");
    setbuf(stdin, NULL);
    fgets(string_A, 100, stdin);
    tamanho = strlen(string_A);
    //fputs(string_A, stdout);

    for(i = 0; i < tamanho - 1; i++){
        if(string_A[i] < 90 && string_A[i] > 64 ){
            string_A[i] += 3;
            continue;
        }
        if(string_A[i] != ' '){
            string_A[i] -= (32 - 3);
        }
          
    } 
    printf("\nString Criptografada: ");
    fputs(string_A, stdout);
}