#include<stdio.h>

void main()
{
    char str1[20] = "Curso de C";
    char str2[20] = "Curso de JS";
    int retorno;

    retorno = strncmp(str1,str2,10); //comparar apenas até o décimo caractere dessas strings

    /*
    0: conteudo das strings é igual
    < 0: conteudo de str1 é menor do que str2
    > 0: conteudo de str1 é maior do que str2
    */
    printf("Retorno = %d \n", retorno);

    system("pause");
}
