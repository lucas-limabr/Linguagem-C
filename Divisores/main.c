#include <stdio.h>
#include <stdlib.h>

divisores(int numero);

int main()
{
   int numero;

   printf("Digite um numero inteiro e positivo: ");
   scanf("%d", &numero);

   divisores(numero);
}

divisores(int numero){
    int cont, divisores = 0;

    for(cont = 1; cont <= (numero /2); cont++){
        if(numero % cont == 0){
            divisores++;
            printf("%d ", cont);
        }
    }
    //o próprio numero também é um divisor
    divisores++;
    printf("e %d sao os %d divisores de %d", numero, divisores, numero);
}
