#include<stdio.h>

void main()
{
    char nome[15], nome2[20];

    printf("Digite um nome: ");
    //scanf("%s", nome); scanf � para ler uma string que n�o contenha espa�o
    fgets(nome, 15, stdin); //caso contr�rio, usar fgets

    printf("%s \n", nome);

    printf("\nDigite mais um nome: ");
    fgets(nome2, 20, stdin);
    printf("%s", nome2);

    //system("pause");
}
