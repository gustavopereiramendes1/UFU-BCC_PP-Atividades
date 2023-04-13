#include <stdio.h>

int main()
{
    int i, count, num, metade;

    printf("Digite um numero: ");
    scanf("%d" , &num);

    metade = (num/2) +1;
    if ((num == 2) || (num == 3) || (num == 5) || (num == 7)){

        printf("eh primo!\n");

    }else if (num%2 != 0)
    {
        for (i = 3, count = 1; i < metade; i+=2){
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
        
    }else{
        printf("nao eh primo!\n");
    }
    
    return 0;
}
