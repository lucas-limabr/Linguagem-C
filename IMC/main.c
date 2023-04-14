#include <stdio.h>
#include <stdlib.h>
//incluindo a biblioteca para o usuário poder digitar decimal com vírgula
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    /*no código em C eu não posso usar decimal com vírgula, apenas com ponto
    float num = 3,89;
    */
    float peso, altura, imc;

    printf("------------IMC------------");
    printf("\nInforme o seu peso (kg): ");
    scanf("%f", &peso);

    printf("Informe a sua altura (metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nIMC = %.2f", imc);

    return 0;
}
