#include<stdio.h>

void main()
{
    char nome[15];

    printf("Digite um nome: ");
    //scanf("%s", nome); scanf é para ler uma string que não contenha espaço
    fgets(nome, 15, stdin); //caso contrário, usar fgets

    printf("%s \n", nome);

    system("pause");
}
