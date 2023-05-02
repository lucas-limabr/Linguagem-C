#include <stdio.h>
#include <stdlib.h>

int main()
{
    char blz, ok;

    //na função getche é exibido o caractere que vc teclou
    printf("Tecle: ");
    blz = getche();

    //na função getch não é exibido o caractere que vc teclou
    printf("\nTecle denovo: ");
    ok = getch();

    printf("\n%c", ok);
}
