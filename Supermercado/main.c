#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

float totalCompras(float valor, int qtd);
float valorFinal(float total, int pagamento);

int main()
{
    setlocale(LC_ALL, "");

    int qtd_itens, pagamento;
    float valor_produto, valor_total;
    char continua;

    do{
        printf("\nDigite o valor do produto: ");
        scanf("%f", &valor_produto);

        printf("Digite a quantidade de itens deste produto?: ");
        scanf("%d", &qtd_itens);

        printf("Tem mais produtos para passar no caixa? [s]- sim / [n]- n�o: ");
        continua = getche();

        valor_total += totalCompras(valor_produto, qtd_itens);
        printf("\n");
    }
    while(continua == 's');

    printf("\nQual a forma de pagamento?");
    printf("\n� vista: 5%% de desconto; cr�dito: acr�scimo de 5%%");
    printf("\nDigite 0 para pagamento � vista, ou 1 para cart�o de cr�dito: ");
    scanf("%d", &pagamento);

    printf("\nValor total da sua compra: R$%.2f", valorFinal(valor_total, pagamento));
}

float totalCompras(float valor, int qtd){

    return valor * qtd;
}

float valorFinal(float total, int pagamento){

    if(pagamento){
        return total * 1.05;
    }
    else{
        return total * 0.95;
    }
}
