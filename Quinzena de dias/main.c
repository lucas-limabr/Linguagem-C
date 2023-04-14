#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;

    printf("Informe um dia do mes: ");
    scanf("%d", &dia);

    if(dia <= 15){
        printf("O dia %d pertence a primeira quinzena", dia);
    }
    else{
        printf("O dia %d pertence a segunda quinzena", dia);
    }

    return 0;
}
