#include <stdio.h>
#include <stdlib.h>

char leitorTemperatura(int temperatura);

int main()
{
    int temperatura, cont;
    char nome_cidade[20], continua;

    do
    {
        //preciso zerar o contador depois que ele sai do la�o while e volta para a execu��o deste do-while
        cont = 0;

        printf("\nInforme o me da sua cidade: ");
        fgets(nome_cidade, 20, stdin);

        printf("Qual a temperatura em graus celsius?(Digite apenas o numero inteiro) ");
        scanf("%d", &temperatura);

        printf("Temperatura de %s ", nome_cidade);

        //se o retorno desta fun��o for diferente de 0, ser� printado na tela o sinal de + ou de -
        if(leitorTemperatura(temperatura))
        {
            //while para eu invocar a fun��o n vezes, onde n � o n�mero da temperatura
            //abs � para fazer o m�dulo de um n�mero, pois se entrar um valor de temperatura negativo, cont
            //sempre ser� maior do que a temperatura, logo, nunca entrar� no la�o
            while(cont < abs(temperatura))
            {
                printf(" %c", leitorTemperatura(temperatura));
                cont++;
            }
        }
        else{
            printf("0");
        }

        printf("\nH� mais alguma cidade para informar? Digite S p/ SIM ou N p/ NAO ");
        continua = getche();
        //preciso zerar o buffer para que a pr�xima entrada do usu�rio seja lida corretamente
        setbuf(stdin, NULL);

        printf("\n");
        }
    while(continua == 'S');
}

char leitorTemperatura(int temperatura)
{
    char sinal;

    if(temperatura < 0)
    {
        sinal = '-';
    }
    else if(temperatura > 0)
    {
        sinal = '+';
    }
    else
    {
        //por mais que a fun��o seja do tipo char, eu posso retornar o valor int 0
        //no primeiro retorno que a fun��o encontrar, a execu��o sair� dela. Por isso, eu posso colocar
        //2 retornos, mas s� um ser� lido com o uso da condicional
        return 0;
    }

    return sinal;
}
