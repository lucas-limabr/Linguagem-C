#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    int numero;

    printf("Digite um numero maximo para ser sorteado: ");
    scanf("%d", &numero);

    printf("O numero sorteado foi: %d", dadoN(numero));
}

int dadoN(num){
    srand(time(NULL));

    int random = rand() % num + 1;
}
