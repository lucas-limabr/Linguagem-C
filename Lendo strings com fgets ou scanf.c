#include<stdio.h>

void main()
{
    char nome[15], nome2[20];

    printf("Digite um nome: ");
    //scanf("%s", nome); scanf é para ler uma string que não contenha espaço
    fgets(nome, 15, stdin); //caso contrário, usar fgets

    printf("%s \n", nome);

    printf("\nDigite mais um nome: ");
    fgets(nome2, 20, stdin);
    printf("%s", nome2);

    //system("pause");
}
