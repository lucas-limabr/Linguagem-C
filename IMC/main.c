#include <stdio.h>
#include <stdlib.h>
//incluindo a biblioteca para o usu�rio poder digitar decimal com v�rgula
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    /*no c�digo em C eu n�o posso usar decimal com v�rgula, apenas com ponto
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
