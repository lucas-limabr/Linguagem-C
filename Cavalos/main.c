#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int cavalos, ferraduras;

    printf("Qual a quantidade total de cavalos hospedados no haras? ");
    scanf("%d", &cavalos);

    ferraduras = cavalos * 4;

    printf("Serão necessárias %d ferraduras", ferraduras);

    return 0;
}
