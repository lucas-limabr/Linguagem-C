#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

struct estrutura
{
    float aporte, valor_esperado, taxa;
};

struct estrutura2
{
    int qtd_meses, validacao;
};

typedef struct estrutura Aplicacao;
typedef struct estrutura2 qtdMeses;

qtdMeses calculoAplicacao(Aplicacao aplicacao);

int main()
{
    setlocale(LC_ALL, "");

    Aplicacao aplicacao;
    qtdMeses qtdmeses;

    printf("Informe o valor do aporte mensal desejado: ");
    scanf("%f", &aplicacao.aporte);

    printf("Informe a taxa de juros (%%) desta aplicacao: ");
    scanf("%f", &aplicacao.taxa);

    printf("Informe o valor final que voce deseja obter para esta aplicacao: ");
    scanf("%f", &aplicacao.valor_esperado);

    qtdmeses = calculoAplicacao(aplicacao);

    if (qtdmeses.validacao == 1)
    {
        printf("O valor final da aplica��o n�o pode ser menor que o valor do aporte");
    }
    else if (qtdmeses.validacao == 0)
    {
        printf("Algum dado est� negativo!");
    }
    else
    {
        printf("Ser�o necess�rios %d meses para que o valor final desejado seja alcan�ado, com o respectivo aporte e taxa", qtdmeses.qtd_meses);
    }
}

qtdMeses calculoAplicacao(Aplicacao aplicacao)
{
    qtdMeses qtdmeses = 2;

    if(aplicacao.aporte <= 0 || aplicacao.taxa <= 0 || aplicacao.valor_esperado <= 0)
    {
        //algum dado est� negativo
        qtdmeses.validacao = 0;
    }
    else if(aplicacao.valor_esperado < aplicacao.aporte)
    {
        //imposs�vel o valor final da aplica��o ser menor do que o aporte
        qtdmeses.validacao = 1;
    }
    else
    {
        float taxa_decimal = (aplicacao.taxa + 100) /100;
        float valor_final = aplicacao.aporte * taxa_decimal;

        for(qtdmeses.qtd_meses = 1; valor_final < aplicacao.valor_esperado; qtdmeses.qtd_meses++)
        {
            valor_final += aplicacao.aporte;
            valor_final *= taxa_decimal;
        }
    }

    return qtdmeses;
}
