#include <stdio.h>
#include <stdlib.h>

int main()
{
    //na fun��o getche � exibido o caractere que vc teclou
    printf("Tecle: ");
    char blz = getche();

    //na fun��o getch n�o � exibido o caracetre que vc teclou
    printf("\nTecle denovo: ");
    char ok = getch();

    printf("\n%c", ok);
}
