#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor_inicial, taxa;
    int dias;

    printf("Informe o valor do depósito inicial: ");
    scanf("%f", &valor_inicial);

    printf("Qual é o valor da taxa de juros fixa? ");
    scanf("%f", &taxa);

    printf("Por quantos dias o valor será aplicado? ");
    scanf("%d", &dias);

    printf("O saldo final da aplicação finaNceira é de %.2f R$", aplicacaoFinanceira(valor_inicial, taxa, dias));
}

float aplicacaoFinanceira(float valor_inicial, float taxa, int dias){

}
