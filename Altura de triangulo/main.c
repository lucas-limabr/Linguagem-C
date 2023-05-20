#include <stdio.h>
#include <stdlib.h>

int main()
{
    int altura, cont = 0, i = 0;

    printf("Informe a altura que voce deseja para o triangulo: ");
    scanf("%d", &altura);

    for(cont = 0; cont < altura; cont++){
        printf("\n*");
    }
}
