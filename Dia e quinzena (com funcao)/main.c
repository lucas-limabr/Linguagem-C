#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

char exibir_msg(int dia, char mes[20])
{

    if(dia <= 15)
    {
        return printf("Primeira quinzena de %s", mes);
    }
    else
    {
        return printf("Segunda quinzena de %s", mes);
    }
}

int main()
{
    setlocale(LC_ALL, "");

    int dia, mes;

    printf("Informe o dia: ");
    scanf("%d", &dia);

    printf("Informe o mês: ");
    scanf("%d", &mes);

    switch(mes)
    {

    case 1:
        exibir_msg(dia, "Janeiro");
        break;
    case 2:
        exibir_msg(dia, "Fevereiro");
        break;
    case 3:
        exibir_msg(dia, "Março");
        break;
    case 4:
        exibir_msg(dia, "Abril");
        break;
    case 5:
        exibir_msg(dia, "Maio");
        break;
    case 6:
        exibir_msg(dia, "Junho");
        break;
    case 7:
        exibir_msg(dia, "Julho");
        break;
    case 8:
        exibir_msg(dia, "Agosto");
        break;
    case 9:
        exibir_msg(dia, "Setembro");
        break;
    case 10:
        exibir_msg(dia, "Outubro");
        break;
    case 11:
        exibir_msg(dia, "Novembro");
        break;
    case 12:
        exibir_msg(dia, "Dezembro");
        break;
    default:
        printf("Digite um intervalo de mês de 1 a 12");
    }

    return 0;
}
