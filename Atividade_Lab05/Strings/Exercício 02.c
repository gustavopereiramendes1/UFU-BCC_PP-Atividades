#include <stdio.h>
#include <string.h>

int main() {
   char str[100];
   int i, qnt = 0;

   printf("Digite uma string: ");
   scanf("%s", str);

   for(i = 0; str[i] != '\0'; i++) {
      if(str[i] == '1') {
         qnt++;
      }
   }

   printf("Numero de 1 na string eh: %d\n", qnt);

   return 0;
}