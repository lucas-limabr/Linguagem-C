#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num_aleatorio, cont, num_user, num_tentativas = 1;

    /* srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
    com o valor da função time(NULL).
    Este por sua vez, é calculado como sendo o total de segundos passados desde 1 de janeiro de 1970
    até a data atual.
    Desta forma, a cada execução o valor da "semente" será diferente.
    */
    srand(time(NULL));

    num_aleatorio = rand() % 100 + 1;

    printf("\nTente adivinhar o número que foi sorteado (no intervalo de 1 a 100)");

    do
    {
        printf("\nDigite um número: ");
        scanf("%d", &num_user);

        if(num_user != num_aleatorio)
        {
            num_tentativas++;

            if(num_user < num_aleatorio)
            {
                printf("O número sorteado é maior, tente novamente");
            }
            else
            {
                printf("O número sorteado é menor, tente novamente");
            }
        }
        else
        {
            if(num_tentativas == 1)
            {
                printf("Caaaarai fi, acertou de primeira! O número sorteado foi %d", num_aleatorio);
            }
            else
            {
                printf("Você acertou em %d tentativas! O número sorteado foi %d", num_tentativas, num_aleatorio);
            }
        }
        printf("\n");
    }
    while(num_user != num_aleatorio);
}
