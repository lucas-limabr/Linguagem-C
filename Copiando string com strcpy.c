#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void main()
{
    char nome [20];
    char novonome[20];

    printf("Informe o nome: \n");
    gets(nome); //ou scanf("%s", &nome);

    strcpy(novonome, nome);

    printf("O novo nome eh: %s \n", novonome);

    system("pause");

}
