#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int candidatosClassificados(int qtd_candidatos[1000], int soma_media);

int main()
{
    int qtd_candidatos[1000], i, soma_media = 0;

    srand(time(NULL));

    for(i = 0; i < 1000; i++){
        qtd_candidatos[i] = rand() % 1000 + 1;
        soma_media += qtd_candidatos[i];
    }

    soma_media /= 1000;

    printf("\nForam classificados %d candidatos\n", candidatosClassificados(qtd_candidatos, soma_media));
}

int candidatosClassificados(int qtd_candidatos[1000], int soma_media){

    int i, classificados = 0;

    for(i = 0; i < 1000; i++){
        if(qtd_candidatos[i] >= soma_media){
            classificados++;
        }
    }

    return classificados;
}
