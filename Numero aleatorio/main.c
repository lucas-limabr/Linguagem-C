#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num_aleatorio, cont, num_user, num_tentativas = 1;

    /* srand(time(NULL)) objetiva inicializar o gerador de n�meros aleat�rios
    com o valor da fun��o time(NULL).
    Este por sua vez, � calculado como sendo o total de segundos passados desde 1 de janeiro de 1970
    at� a data atual.
    Desta forma, a cada execu��o o valor da "semente" ser� diferente.
    */
    srand(time(NULL));

    num_aleatorio = rand() % 100 + 1;

    printf("\nTente adivinhar o n�mero que foi sorteado (no intervalo de 1 a 100)");

    do
    {
        printf("\nDigite um n�mero: ");
        scanf("%d", &num_user);

        if(num_user != num_aleatorio)
        {
            num_tentativas++;

            if(num_user < num_aleatorio)
            {
                printf("O n�mero sorteado � maior, tente novamente");
            }
            else
            {
                printf("O n�mero sorteado � menor, tente novamente");
            }
        }
        else
        {
            if(num_tentativas == 1)
            {
                printf("Caaaarai fi, acertou de primeira! O n�mero sorteado foi %d", num_aleatorio);
            }
            else
            {
                printf("Voc� acertou em %d tentativas! O n�mero sorteado foi %d", num_tentativas, num_aleatorio);
            }
        }
        printf("\n");
    }
    while(num_user != num_aleatorio);
}
