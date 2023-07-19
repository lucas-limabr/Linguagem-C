#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

struct estrutura{
    float temp_minima, temp_maxima, temp_media;
};

typedef struct estrutura dadosTemperatura;

dadosTemperatura analiseTemperatura(int qtd_temperatura, float temperatura[qtd_temperatura], float soma_temperatura);

int main()
{
    setlocale(LC_ALL, "");

    int qtd_temperatura, i;
    float soma_temperatura;
    dadosTemperatura dados_temperatura;

    printf("Informe quantas temperaturas serão informadas: ");
    scanf("%d", &qtd_temperatura);

    float temperatura[qtd_temperatura];

    for(i = 0; i < qtd_temperatura; i++){
        printf("\nQual é a temperatura: ");
        scanf("%f", &temperatura[i]);

        soma_temperatura += temperatura[i];
    }

    dados_temperatura = analiseTemperatura(qtd_temperatura, temperatura, soma_temperatura);

    printf("\nTemperatura mínima do mês: %f", dados_temperatura.temp_minima);
    printf("\nTemperatura máxima do mês: %f", dados_temperatura.temp_maxima);
    printf("\nMédia do mês: %f", dados_temperatura.temp_media);
}

dadosTemperatura analiseTemperatura(int qtd_temperatura, float temperatura[qtd_temperatura], float soma_temperatura){
    int i;
    dadosTemperatura dados_temperatura;
    dados_temperatura.temp_maxima = temperatura[0];
    dados_temperatura.temp_minima = temperatura[0];


    for(i = 1; i < qtd_temperatura; i++){
        if(temperatura[i] > dados_temperatura.temp_maxima){
            dados_temperatura.temp_maxima = temperatura[i];
        }
        if(temperatura[i] < dados_temperatura.temp_minima){
            dados_temperatura.temp_minima = temperatura[i];
        }
    }

    dados_temperatura.temp_media = soma_temperatura / qtd_temperatura;

    return dados_temperatura;
}
