#include <stdio.h>
#include <stdlib.h>

int main()
{
    char blz, ok;

    //na fun��o getche � exibido o caractere que vc teclou
    printf("Tecle: ");
    blz = getche();

    //na fun��o getch n�o � exibido o caractere que vc teclou
    printf("\nTecle denovo: ");
    ok = getch();

    printf("\n%c", ok);
}
