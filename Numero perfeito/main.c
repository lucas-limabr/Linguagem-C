#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int numeroPerfeito(num);

int main()
{
    setlocale(LC_ALL, "");

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if(numeroPerfeito(numero))
    {
        printf("VERDADEIRO");
    }
    else
    {
        printf("FALSO");
    }
}

int numeroPerfeito(num)
{
    int metade, cont, soma_de_divisores = 1;

    if(num % 2 == 1)
    {
        //FALSO, o número não é perfeito
        return 0;
    }
    else
    {
        metade = num / 2;

        for(cont = 2; cont <= metade; cont++)
        {
            if(num % cont == 0)
            {
                soma_de_divisores += cont;
            }
        }

        if(soma_de_divisores == num)
        {
            //VERDADEIRO, o número é perfeito
            return 1;
        }
        else
        {
            //FALSO
            return 0;
        }
    }
}
