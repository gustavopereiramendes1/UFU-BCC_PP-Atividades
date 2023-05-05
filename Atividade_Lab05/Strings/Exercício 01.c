#include <stdio.h>
#include <string.h>

int main(){
    char str[44];
    setbuf(stdin, NULL);
    printf("Digite um palavra: ");
    fgets(str , 44, stdin);

    
    printf("A palavra escrita foi: ");
    fputs(str, stdout);
    return 0;
}