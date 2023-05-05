#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    int n, tamanho;

    printf("Digite uma string: ");
    fgets(str1, 100, stdin);
    setbuf(stdin, NULL);
    printf("Digite uma string: ");
    fgets(str2, 100, stdin);

    do{
        printf("Digite um numero positivo: ");
        scanf("%d" , &n);
    }while(n < 0 || n == 0);

    tamanho = strlen(str2);
    if(tamanho > n){
        str2[n] = '\0';
    }
    strncat(str1, str2, n);

    fputs(str1, stdout);
    return 0;
}