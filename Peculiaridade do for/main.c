#include <stdio.h>
int main ()
{
    int altura;

    printf ("Informe a altura do triangulo: ");
    scanf ("%d", &altura);

    int j, i;

    //PARTICULARIDADE DO FOR
    //v�lida SOMENTE quando eu tenho um for dentro do outro -> o for interno ao outro se comporta de forma at�pica:
    //a cada vez que o programa passa pelo for EXTERNO e entra na linha de execu��o for INTERNO, a vari�vel j
    //tem o seu valor alterado para o valor da declara��o novamente, no caso, 1. Ap�s isso, se a execu��o entra
    //no for, ele � incrementado normalmente a cada itera��o.
    for (i = 1; i <= altura; i++)
    {
        for(j=1; j <= i; j++)
        {
            printf ("* ");
        }

        printf ("\n");
    }
}
