#include <stdio.h>
#include <stdlib.h>

leitorTemperatura(int temperatura);

int main()
{
    int temperatura, cont;
    char nome_cidade[20], continua;

    do
    {
        printf("\nInforme o me da sua cidade: ");
        fgets(nome_cidade, 20, stdin);

        printf("Qual a temperatura em graus celsius?(Digite apenas o numero inteiro) ");
        scanf("%d", &temperatura);

        printf("Temperatura de %s ", nome_cidade);
        leitorTemperatura(temperatura);

        printf("\nHá mais alguma cidade para informar? Digite S p/ SIM ou N p/ NAO ");
        continua = getche();


    }
    while(continua == 'S');
}

leitorTemperatura(int temperatura)
{
    int cont;

    if(temperatura == 0)
    {
        printf("0");
    }
    else
    {
        for(cont = 0; cont < temperatura; cont++){
            if(temperatura > 0){
                printf("+");
            }
            else{
                printf("-");
            }
        }
    }
}
