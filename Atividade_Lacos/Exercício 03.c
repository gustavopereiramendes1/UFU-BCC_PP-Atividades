#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int contagem = 10;
    printf("Contagem Regressiva: \n");
    while (contagem >= 0)
    {
        printf("%d\n" , contagem);
        contagem--;
    }
    printf("FIM!\n");
    
    return 0;
}