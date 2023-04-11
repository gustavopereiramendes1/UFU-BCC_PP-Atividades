#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int num1, d1,d2, i;
    printf("Digite quantas vezes os dados serao lancados: ");
    scanf("%d" , &num1);

    srand(time(NULL));

    for(i = 1; i <= num1; i++){
        d1 = (rand()%7);
        d2 = (rand()%7);
        if(d1 != 0 && d2 != 0){
            if(d1 == d2){
                printf("Lancamento %d: %d = %d \n" , i,d1,d2 );
            }else if(d1 < d2){
                printf("Lancamento %d: %d < %d \n" ,i,d1,d2 );
            }else{
                printf("Lancamento %d: %d > %d \n" ,i,d1,d2 );
            }
            
        }else{
            i--;
        }
    }

    return 0;
}
