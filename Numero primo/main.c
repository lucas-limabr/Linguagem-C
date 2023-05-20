#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;

   printf("Verificacao de numero primo\n");
   printf("Digite um numero: ");
   scanf("%d", &num);

   if(numeroPrimo(num)){
        printf("Numero primo");
   }
   else{
    printf("O numero nao e primo");
   }
}

int numeroPrimo(int num){
   int divisores = 2, cont;

   for(cont = 2; cont <= (num / 2); cont++){
        if(num % cont == 0){
            divisores++;
        }

        if(divisores > 2){
            //numero não primo
            return 0;
        }
   }
}
