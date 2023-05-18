#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int main()
{
    int segundos;

    printf("\tQuantos segundos devo aguardar? ");
    scanf("%d", &segundos);

    while(segundos > 0){
        printf("%d\n", segundos);
        segundos--;

        Sleep(1000);
    }

    printf("\n\n\t-----------------");
    printf("\n\t\tFim");
}
