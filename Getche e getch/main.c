#include <stdio.h>
#include <stdlib.h>

int main()
{
    //na função getche é exibido o caractere que vc teclou
    printf("Tecle: ");
    char blz = getche();

    //na função getch não é exibido o caracetre que vc teclou
    printf("\nTecle denovo: ");
    char ok = getch();

    printf("\n%c", ok);
}
