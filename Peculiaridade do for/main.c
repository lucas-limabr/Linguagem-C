#include <stdio.h>
int main ()
{
    int altura;

    printf ("Informe a altura do triangulo: ");
    scanf ("%d", &altura);

    int j, i;

    //PARTICULARIDADE DO FOR
    //válida SOMENTE quando eu tenho um for dentro do outro -> o for interno ao outro se comporta de forma atípica:
    //a cada vez que o programa passa pelo for EXTERNO e entra na linha de execução for INTERNO, a variável j
    //tem o seu valor alterado para o valor da declaração novamente, no caso, 1. Após isso, se a execução entra
    //no for, ele é incrementado normalmente a cada iteração.
    for (i = 1; i <= altura; i++)
    {
        for(j=1; j <= i; j++)
        {
            printf ("* ");
        }

        printf ("\n");
    }
}
