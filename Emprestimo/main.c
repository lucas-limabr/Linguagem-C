#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float valor_emprest, salario, valor_parcela;
    int qtd_parcela, ok = 0;

    do
    {
        printf("\nInforme o seu salário: ");
        scanf("%f", &salario);

        printf("Qual o valor de empréstimo que você deseja fazer: ");
        scanf("%f", &valor_emprest);

        printf("Em quantas parcelas deseja pagar?: ");
        scanf("%d", &qtd_parcela);

        if(salario < 0 || valor_emprest < 0 || qtd_parcela < 0)
        {
            printf("\nAlgum dado está inválido, nenhum valor pode ser negativo");
            ok = 1;
        }
        else
        {
            ok = 0;
            valor_parcela = valor_emprest / qtd_parcela;

            if(valor_parcela > 0.3 * salario)
            {
                printf("\nEmpréstimo não concedido\nO valor da parcela de R$%.2f é maior que 30%% do salário", valor_parcela);
            }
            else
            {
                printf("\nEmpréstimo concedido\nO valor de cada parcela é de R$%.2f, a ser paga em %d parcelas", valor_parcela, qtd_parcela);
            }
        }
    }
    //enquanto ok for diferente de zero
    while(ok);
}
