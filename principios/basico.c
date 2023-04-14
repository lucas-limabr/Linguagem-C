#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    //chamando a fun��o para utilizar pt-br
    setlocale(LC_ALL, "");

    //declarando uma constante
    #define NOME "Lucas"
    #define PI 3.14

    //declarando alguns tipos de vari�veis
    short int num;
    int num2;
    float num3;
    double num4;

    //declarando variaveis que ter�o seus valores dados pelo usuario
    float oper1;
    float oper2;
    int divisor, dividendo;


    //atribuindo valor a elas
    num = 32767;
    num2 = 2100000000;
    num3 = 10.785;
    divisor = 8;
    dividendo = 3;

    //exibindo na tela o valor das variaveis
    printf("N�mero inteiro (ocupando 2 bytes de memoria): %d", num);
    printf("\nNumero inteiro (ocupando 4 bytes de memoria): %d", num2);
    printf("\nNumero racional (ocupando 4 bytes de memoria): %.3f", num3);

    //exibindo na tela o valor das constantes
    printf("\nNome: %s \nPI = %f", NOME, PI);

    //lendo dados de entrada
    printf("\nC�lculos");
    printf("\nDigite um n�mero racional: ");
    scanf("%f", &oper1);

    printf("Digite mais um numero: ");
    scanf("%f", &oper2);

    //variaveis que receber�ao o conteudo de outras variaveis
    float subtracao = oper1 - oper2;
    float multiplicacao = oper1 * oper2;
    float divisao = oper1 / oper2;
    int modulo = divisor % dividendo;

    printf("Resultado da soma = %.2f", oper1 + oper2);
    printf("\nResultado da subtra��o = %.2f", subtracao);
    printf("\nResultado da divis�o = %.2f", divisao);
    printf("\nResultado da multiplica��o = %.2f", multiplicacao);
    printf("\nResultado do m�dulo de %d e %d = %d", divisor, dividendo, modulo);
}
