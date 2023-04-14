#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracter1;
    char caracter2;

    printf("Digite um caractere: ");
    scanf("%c", &caracter1);
    //quando utiliza-se scanf para ler um caractere, é necessário limpar o buffer do teclado
    setbuf(stdin, NULL);

    printf("Digite mais um: ");
    scanf("%c", &caracter2);

    printf("\nLetras digitadas: %c e %c", caracter1, caracter2);

    return 0;
}
