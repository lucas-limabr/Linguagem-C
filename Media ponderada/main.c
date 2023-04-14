#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float nota1, nota2, nota3, result;

    printf("Informe a sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    result = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / (2 + 3 + 5);

    printf("Nota 1 = peso 2\nNota 2 = peso 3\nNota 3 = peso 5");
    printf("\nMédia ponderada: %.2f", result);

    return 0;
}
