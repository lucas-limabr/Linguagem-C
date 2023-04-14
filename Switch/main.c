#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opcao;

    printf("Escolha uma das letras abaixo:\nA\nB\nC\n\n");
    scanf("%c", &opcao);

    switch(opcao)
    {
    case 'A':
        printf("--------\n");
        printf("A");
        break;


    case 'B':
        printf("--------\n");
        printf("B");
        break;

    case 'C':
        printf("--------\n");
        printf("C");
        break;

    default:
        printf("Invalido");
    }

    return 0;
}
