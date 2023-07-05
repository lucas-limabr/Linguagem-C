#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int candidatosClassificados(int qtd_candidatos[1000]);

int main()
{
    int qtd_candidatos[1000], i;

    srand(time(NULL));

    for(i = 0; i < 1000; i++){
        qtd_candidatos[i] = rand() % 1000 + 1;
    }

    printf("\nForam classificados %d candidatos\n", candidatosClassificados(qtd_candidatos));
}

int candidatosClassificados(int qtd_candidatos[1000]){

    int i, classificados = 0;

    for(i = 0; i < 1000; i++){
        if(qtd_candidatos[i] >= 650){
            classificados++;
        }
    }

    return classificados;
}
