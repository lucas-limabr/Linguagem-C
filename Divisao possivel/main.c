#include <stdio.h>
#include <stdlib.h>

int main()
{
    int divisor, dividendo, resultado;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    resultado = dividendo % divisor;

    if(resultado == 0){
        printf("E divisivel");
    }
    else{
        printf("%d nao e divisivel por %d, pois o resto e %d", dividendo, divisor, resultado);
    }


    return 0;
}
