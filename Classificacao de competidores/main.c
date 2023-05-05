#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float pontuacao, maior_nota = 0;
    int identificador, id_maiorNota;
    char continua = 's';

    for(identificador = 1; continua == 's' || continua == 'S'; identificador++)
    {
        printf("\nCompetidor %d: Qual foi a sua pontuação? ", identificador);
        scanf("%f", &pontuacao);

        printf("Tem mais algum competidor? [s]- sim / [n]- nao: ");
        continua = getche();

        printf("\n");

        if(pontuacao > maior_nota)
        {
            maior_nota = pontuacao;
            id_maiorNota = identificador;
        }
    }

    printf("\nO competidor %d foi o campeão com %.2f pontos", id_maiorNota, maior_nota);
}
