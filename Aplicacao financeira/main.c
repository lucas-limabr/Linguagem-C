#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

struct estrutura
{
    float valor_inicial, taxa;
    int dias;
};

typedef struct estrutura Aplicacao;

float calculoRendimento(Aplicacao aplicacao);

int main()
{
    setlocale(LC_ALL, "");

    Aplicacao aplicacao;

    printf("Informe o valor do depósito inicial: ");
    scanf("%f", &aplicacao.valor_inicial);

    printf("Qual é o valor da taxa de juros fixa em porcentagem? ");
    scanf("%f", &aplicacao.taxa);

    printf("Por quantos dias o valor será aplicado? ");
    scanf("%d", &aplicacao.dias);

    if(calculoRendimento(aplicacao)){
    printf("\nO saldo final da aplicação financeira é de %.2f R$\n", calculoRendimento(aplicacao));
    }
    else{
        printf("\nErro, algum dado está com valor NEGATIVO\n");
    }
}

float calculoRendimento(Aplicacao aplicacao)
{

    //convertendo a taxa para um valor decimal
    float valor_final, taxa_decimal = ((aplicacao.taxa + 100) / 100);
    int cont = 1;

    if(aplicacao.dias <= 0 || aplicacao.taxa <= 0 || aplicacao.valor_inicial <= 0)
    {
        return valor_final = 0;
    }
    else
    {

        valor_final = aplicacao.valor_inicial * taxa_decimal;

        while(cont < aplicacao.dias)
        {
            valor_final *= taxa_decimal;
            cont++;
        }
        return valor_final;
    }
}
