#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

float percentualAcimaMedia(int qtd_residencia, float consumo_energia[qtd_residencia]);

int main()
{
    setlocale(LC_ALL, "");

    int qtd_residencia, i;

    printf("Informe a quantidade de resid�ncias: ") ;
    scanf("%d", &qtd_residencia);

    float consumo_energia[qtd_residencia];

    for(i = 0; i < qtd_residencia; i++)
    {
        printf("Informe o consumo de energia el�trica (kw/h) da resid�ncia %d: ", i + 1);
        scanf("%f", &consumo_energia[i]);
    }

    if(percentualAcimaMedia(qtd_residencia, consumo_energia) == -1)
    {
        printf("\nERRO! Algum dado de leitura est� negativo");
    }
    else
    {
        printf("\nO percentual de resid�ncias que tiveram consumo acima da m�dia foi de %.2f%%", percentualAcimaMedia(qtd_residencia, consumo_energia));
    }
}

float percentualAcimaMedia(int qtd_residencia, float consumo_energia[qtd_residencia])
{

    int i, qtd_acima_media = 0;
    float media = 0, percentual;

    //calculando a m�dia
    for(i = 0; i < qtd_residencia; i++)
    {

        //valida��o para que o programa n�o aceite dado de leitura negativo, usar -1 como valor de retorno se for negativo
        if(consumo_energia[i] < 0)
        {
            return -1;
        }

        media += consumo_energia[i];
    }

    media /= qtd_residencia;

    //coletando quantas leituras est�o acima da m�dia
    for(i = 0; i < qtd_residencia; i++)
    {
        if(consumo_energia[i] > media)
        {
            qtd_acima_media++;
        }
    }

    percentual = 100 * qtd_acima_media / qtd_residencia;
    return percentual;
}
