#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int qtd_itens, pagamento;
    float valor_produto, valor_total = 0;
    char continua;

    do{
        printf("\nDigite o valor do produto: ");
        scanf("%f", &valor_produto);

        printf("Digite a quantidade de itens deste produto?: ");
        scanf("%d", &qtd_itens);

        printf("Tem mais produtos para passar no caixa? [s]- sim / [n]- n�o: ");
        continua = getche();

        printf("\n");

        valor_total += (valor_produto * qtd_itens);
    }
    while(continua == 's');

    printf("\nQual a forma de pagamento?");
    printf("\n� vista: 5%% de desconto; cr�dito: acr�scimo de 5%%");
    printf("\nDigite 0 para pagamento � vista, ou 1 para cart�o de cr�dito: ");
    scanf("%d", &pagamento);

    if(pagamento){
        valor_total *= 1.05;
    }
    else{
        valor_total *= 0.95;
    }

    printf("\nValor total da sua compra: R$%.2f", valor_total);
}
