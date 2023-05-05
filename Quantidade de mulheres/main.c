#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char continua, sexo;
    int idade, qtd_mulheres = 0;

    do
    {
        printf("\nInforme o seu sexo: [m]- masculino / [f]- feminino: ");
        sexo = getche();

        printf("\nInforme a sua idade: ");
        scanf("%d", &idade);

        printf("Há mais alguém para informar os dados? [s]- sim / [n]- não: ");
        continua = getche();

        printf("\n");

        if(sexo == 'f' && (idade > 18 && idade < 35))
        {
            qtd_mulheres++;
        }
    }
    while(continua == 's');

    printf("\nA quantidade de mulheres com idade entre 18 e 35 anos é %d", qtd_mulheres);
}
