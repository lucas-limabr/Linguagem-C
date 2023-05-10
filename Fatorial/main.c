#include <stdio.h>
#include <stdlib.h>

int fatorial(int num);

int main()
{
   int num;

   printf("Calculo de fatorial\n");
   printf("Digite um numero: ");
   scanf("%d", &num);

   printf("Fatorial de %d = %d", num, fatorial(num));
}

int fatorial(int num){

    int cont, resultado = 1;

    for(cont = num; cont > 0; cont--){
        resultado *= cont;
    }

    return resultado;
}
