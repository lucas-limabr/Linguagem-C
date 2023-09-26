#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

void indicesAtleta(float *nota, int qtd_juiz);

int main()
{
    setlocale(LC_ALL, "");

    int qtd_juiz, i;

    printf("São quantos juízes? ");
    scanf("%d", &qtd_juiz);

    float *nota = (float*)malloc(sizeof(float)*qtd_juiz);

    for(i = 0; i < qtd_juiz; i++){
        printf("Juíz %d: Digite a sua nota [0-10] para o atleta: ", i + 1);
        scanf("%f", nota);
    }

    indicesAtleta(nota, qtd_juiz);
}

void indicesAtleta(float *nota, int qtd_juiz){

    int i;
    float media, maior_nota = *nota, pior_nota = *nota, porcentagem_acima_media, porcentagem_abaixo_media;

    for(i = 0; i < qtd_juiz; i++){
        media += *(nota + 1);

        if(*(nota + 1) > maior_nota){
            maior_nota = nota[i];
        }

        if(*(nota + 1) < pior_nota){
            pior_nota = nota[i];
        }
    }

    media /= qtd_juiz;

    for(i = 0; i < qtd_juiz; i++){
        if(*(nota + 1) > media){
            porcentagem_acima_media++;
        }
        else{
            porcentagem_abaixo_media++;
        }
    }

    porcentagem_acima_media *= 100 / qtd_juiz;
    porcentagem_abaixo_media *= 100 / qtd_juiz;
}

