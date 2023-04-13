#include <stdio.h>

int main()
{
    int i, count, num;

    printf("Digite um numero: ");
    scanf("%d" , &num);

    for (i = 1, count = 0; i <= num; i++)
    {
        if(num%i == 0){
            count++;
        }
    }
    if (count == 2)
    {
        printf("eh primo!\n");
    }else{
        printf("nao eh primo!\n");
    }
    
    return 0;
}
