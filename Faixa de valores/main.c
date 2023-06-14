#include <stdio.h>
#include <stdlib.h>

void imprimeNumeros(int valor_inicial, int valor_final);

int main()
{
    int valor_inicial, valor_final;

    printf("Informe o valor inicial: ");
    scanf("%d", &valor_inicial);

    printf("Informe o valor final: ");
    scanf("%d", &valor_final);

    imprimeNumeros(valor_inicial, valor_final);
}

void imprimeNumeros(int valor_inicial, int valor_final)
{
    int cont;

    printf("\n");

    for(cont = valor_inicial; cont <= valor_final; cont++)
    {
        printf("%d,", cont);
    }
}
