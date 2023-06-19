#include <stdio.h>
#include <stdlib.h>

char leitorTemperatura(int temperatura);

int main()
{
    int temperatura, cont;
    char nome_cidade[20], continua;

    do
    {
        //preciso zerar o contador depois que ele sai do laço while e volta para a execução deste do-while
        cont = 0;

        printf("\nInforme o me da sua cidade: ");
        fgets(nome_cidade, 20, stdin);

        printf("Qual a temperatura em graus celsius?(Digite apenas o numero inteiro) ");
        scanf("%d", &temperatura);

        printf("Temperatura de %s ", nome_cidade);

        //se o retorno desta função for diferente de 0, será printado na tela o sinal de + ou de -
        if(leitorTemperatura(temperatura))
        {
            //while para eu invocar a função n vezes, onde n é o número da temperatura
            //abs é para fazer o módulo de um número, pois se entrar um valor de temperatura negativo, cont
            //sempre será maior do que a temperatura, logo, nunca entrará no laço
            while(cont < abs(temperatura))
            {
                printf(" %c", leitorTemperatura(temperatura));
                cont++;
            }
        }
        else{
            printf("0");
        }

        printf("\nHá mais alguma cidade para informar? Digite S p/ SIM ou N p/ NAO ");
        continua = getche();
        //preciso zerar o buffer para que a próxima entrada do usuário seja lida corretamente
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
        //por mais que a função seja do tipo char, eu posso retornar o valor int 0
        //no primeiro retorno que a função encontrar, a execução sairá dela. Por isso, eu posso colocar
        //2 retornos, mas só um será lido com o uso da condicional
        return 0;
    }

    return sinal;
}
