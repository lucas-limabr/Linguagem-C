#include<stdio.h>

void main()
{
    char nome[15];

    printf("Digite um nome: ");
    //scanf("%s", nome); scanf � para ler uma string que n�o contenha espa�o
    fgets(nome, 15, stdin); //caso contr�rio, usar fgets

    printf("%s \n", nome);

    system("pause");
}
