#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado1, lado2, lado3;

    printf("Informe o primeiro lado do triangulo: ");
    scanf("%d", &lado1);

    printf("Informe o segundo lado do triangulo: ");
    scanf("%d", &lado2);

    printf("Informe o terceiro lado do triangulo: ");
    scanf("%d", &lado3);

    if(lado1 == lado2 && lado2 == lado3){
        printf("Triangulo equilatero");
    }
    else if((lado1 != lado2) && (lado2 != lado3) && (lado1 != lado3)){
        printf("Triangulo escaleno");
    }
    else{
        printf("Triangulo isosceles");
    }

    return 0;
}
