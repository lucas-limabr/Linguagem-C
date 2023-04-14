#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL, "");

    float base, expoente, result;

    printf("Digite a base da potência: ");
    scanf("%f", &base);

    printf("Digite o expoente da potência: ");
    scanf("%f", &expoente);

    result = pow(base, expoente);

    printf("Resultado: %.2f", result);

    return 0;
}
