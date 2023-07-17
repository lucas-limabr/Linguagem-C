#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct estrutura1
{
    float quantia, percentual;
};

struct estrutura2
{
    int qtd_meses, validacao;
};

typedef struct estrutura1 Valores;
typedef struct estrutura2 QtdMeses;

QtdMeses CalculaMeses (Valores valores);

int main()
{
    setlocale(LC_ALL, "");

    Valores valores;

    printf("Informe a quantia monetária que você tem: ");
    scanf("%f", &valores.quantia);

    printf("Informe o percentual deste valor que você gasta mensalmente: ");
    scanf("%f", &valores.percentual);

    QtdMeses qtd_meses = CalculaMeses(valores);

    if(qtd_meses.validacao)
    {
        printf("\nERRO! Algum valor está negativo\n");
    }
    else
    {
        printf("\nVocê conseguirá sobreviver por %d meses\n", qtd_meses.qtd_meses);
    }
}

QtdMeses CalculaMeses (Valores valores)
{

    QtdMeses qtd_meses;
    float percentual_mensal = valores.quantia * (valores.percentual / 100);
    float somatorio = percentual_mensal;

    if(valores.quantia <= 0 || valores.percentual <= 0)
    {
        qtd_meses.validacao = 1;
    }

    else
    {
        qtd_meses.validacao = 0;

        for(qtd_meses.qtd_meses = 0; somatorio <= valores.quantia; qtd_meses.qtd_meses++)
        {
            somatorio += percentual_mensal;
        }
    }

    return qtd_meses;
}
