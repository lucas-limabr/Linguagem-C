#include <stdio.h>
#include <stdlib.h>

imprimirRetangulo(int altura);

int main()
{
    int altura;

    printf("Informe a altura que voce deseja para o triangulo: ");
    scanf("%d", &altura);
    imprimirRetangulo(altura);
}

imprimirRetangulo(int altura)
{
    int cont = 1, i;

    while(cont <= altura)
    {
        //quando eu voltar para o primeiro laço, eu preciso zerar a variável i para
        i = 0;
        while(i < cont)
        {
            printf("*");
            i++;

        }
        cont++;
        printf("\n");
    }
}
