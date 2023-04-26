#include <stdio.h>

void desenha_linha(int num_linha);

int main(){
    int num_linha;
    printf("Digite a quantidade: ");
    scanf("%d" , &num_linha);

    desenha_linha(num_linha);
    return 0;
}
void desenha_linha(int num_linha){
    int i;
    for(i = num_linha; i > 0; i--){
        printf("=");
    }
}