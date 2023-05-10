#include <stdio.h>
#include <stdlib.h>

float operacao(float oper1, float oper2, char sinal);

int main()
{
    float oper1, oper2;
    char sinal;

    printf("Informe o primeiro operando: ");
    scanf("%f", &oper1);

    printf("Informe o segundo operando: ");
    scanf("%f", &oper2);

    printf("Escolha o sinal da operacao que voce deseja fazer");
    printf("\n[+]- soma\n[-]- subtracao\n[*]- multiplicacao\n[/]- divisao\n");
    sinal = getche();

    printf("\nResultado: %.2f %c %.2f = %.2f", oper1, sinal, oper2, operacao(oper1, oper2, sinal));
}

float operacao(float oper1, float oper2, char sinal)
{

    float resultado;

    switch(sinal)
    {
    case '+':
        resultado = oper1 + oper2;
        break;

    case '-':
        resultado = oper1 - oper2;
        break;
    case '*':
        resultado = oper1 * oper2;
        break;
    case '/':
        resultado = oper1 / oper2;
        break;
    default:
        printf("Informe um simbolo correto");
    }

    return resultado;
}
