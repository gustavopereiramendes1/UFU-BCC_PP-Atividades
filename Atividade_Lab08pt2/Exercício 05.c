#include <stdio.h>
#include <string.h>

int main(){
    char vet1[100], vet2[100];
    int tamanho, cont =0;

    printf("Digite uma string: ");
    fgets(vet1 , 100, stdin);
    setbuf(stdin, NULL);
    printf("Digite outra string: ");
    fgets(vet2, 100, stdin);
    
    tamanho = strlen(vet2);
    for (int i = 0; i < tamanho; i++) {
        if (*(vet2 +i) == '\n') {
            *(vet2 +i) = '\0';
            break;  // opcional, remove apenas a primeira ocorrência de \n
        }
    }
    tamanho = strlen(vet2);
    
    for(int i = 0; *(vet2 +i) != '\0'; i++){
        cont = 0;
        if(*(vet1 + i) == *(vet2)){           //verifica se o caracter é igual a primeira letra da segunda string
            cont++;                       // se for igual, adiciona 1 a variavel cont
            for(int j = 1, k = i+1; j < tamanho; j++, k++){         //percorre as letras seguintes das strings
                if(*(vet2+j) == *(vet1+k)){             //verifica se as letras são iguais
                    cont++;                         //se for igual, adiciona +1 a variavel cont
                }else{
                    break;                          //se não, fecha o for interno
                }
                
            }                       
            if(cont == tamanho){    /*verifica se já foi encontrada a segunda palavra dentro da primeira string*/
                break;              /*para evitar processamentos desnecessarios*/
            }
            
        }
    }
    if(cont == tamanho){                /*verifica se a cont(quantidades de letras iguais) é igual ao tamanho*/
        printf("\nEsta contida!\n");      /*da palavra*/
    }else{
        printf("\nNao esta contida!\n");
    }
    return 0;
}