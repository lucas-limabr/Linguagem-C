#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int main()
{
    int segundos;

    printf("Quantos segundos devo aguardar? ");
    scanf("%d", &segundos);

    printf("Programa em estado de espera por %d segundos...", segundos);
    Sleep(segundos * 1000);
    printf("\nTempo finalizado");

    return 0;
}
