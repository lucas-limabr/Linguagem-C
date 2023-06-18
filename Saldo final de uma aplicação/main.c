#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

struct estrutura
{
    float aporte, taxa;
    int qtd_meses;
};

struct estrutura2
{
    float valor_final;
    int validacao;
};

typedef struct estrutura Aplicacao;
typedef struct estrutura2 ValorFinal;

ValorFinal calculoAplicacao(Aplicacao aplicacao);

int main()
{
    setlocale(LC_ALL, "");

    Aplicacao aplicacao;
    ValorFinal valor_final;

    printf("Informe o valor do aporte mensal desejado: ");
    scanf("%f", &aplicacao.aporte);

    printf("Informe a taxa de juros (%%) desta aplicacao: ");
    scanf("%f", &aplicacao.taxa);

    printf("Informe o a quantidade de meses que este valor será aplicado: ");
    scanf("%d", &aplicacao.qtd_meses);

    valor_final = calculoAplicacao(aplicacao);

    if (valor_final.validacao)
    {
         printf("Algum dado está negativo ou zerado!");
    }
    else
    {
        printf("O valor final desta aplicação será de R$ %.2f", valor_final.valor_final);
    }
}

ValorFinal calculoAplicacao(Aplicacao aplicacao)
{
    ValorFinal valor_final;
    valor_final.validacao = 0;

    if(aplicacao.aporte <= 0 || aplicacao.taxa <= 0 || aplicacao.qtd_meses <= 0)
    {
        //algum dado está negativo
        valor_final.validacao = 1;
    }
    else
    {
        int cont;
        float taxa_decimal = (aplicacao.taxa + 100) /100;
        valor_final.valor_final = aplicacao.aporte * taxa_decimal;

        for(cont = 1; cont < aplicacao.qtd_meses; cont++)
        {
            valor_final.valor_final += aplicacao.aporte;
            valor_final.valor_final *= taxa_decimal;
        }
    }

    return valor_final;
}
