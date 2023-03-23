#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("Digite uma letra maiuscula: ");
    scanf("%c" , &x);
    printf("A letra minuscula eh: %c" , (x + 32));
    return 0;
}
