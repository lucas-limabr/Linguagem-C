#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, expoente, result = 1;
    int cont = 1;

    printf("Insira a base: ");
    scanf("%d", &base);

    printf("Insira o expoente: ");
    scanf("%d", &expoente);



    while(cont <= expoente){
        result *= base;
        cont++;
    }

    printf("Resultado: %d", result);


    return 0;
}
