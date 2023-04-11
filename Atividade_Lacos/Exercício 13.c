#include <stdio.h>

int main()
{
    int i, soma;

    for (i = 1, soma = 0; i < 1000; i++)
    {
        if(!(i % 3) || !(i % 5)){
            soma += i;
        }
    }
    printf("A soma dos multiplos de 1000 eh %d" , soma);
    return 0;
}
