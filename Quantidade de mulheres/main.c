#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int qtdMulheres(char sexo, int idade);

int main()
{
    setlocale(LC_ALL, "");

    char continua, sexo;
    int idade, total_mulheres = 0;

    do
    {
        printf("\nInforme o seu sexo: [m]- masculino / [f]- feminino: ");
        sexo = getche();

        printf("\nInforme a sua idade: ");
        scanf("%d", &idade);

        printf("Há mais alguém para informar os dados? [s]- sim / [n]- não: ");
        continua = getche();

        total_mulheres += qtdMulheres(sexo, idade);

        printf("\n");
    }
    while(continua == 's');

    printf("\nA quantidade de mulheres com idade entre 18 e 35 anos é %d", total_mulheres);
}

int qtdMulheres(char sexo, int idade)
{
   int total_mulheres = 0;

   if(sexo == 'f' && (idade > 18 && idade < 35))
    {
        total_mulheres++;
    }

    return total_mulheres;
}
