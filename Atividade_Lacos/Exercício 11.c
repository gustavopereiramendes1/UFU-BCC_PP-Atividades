#include <stdio.h>

int main()
{
    int num1, i;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    for (i = 0; i <= num1; i++)
    {
        printf("%d, " ,i);
    }
    
    return 0;
}
