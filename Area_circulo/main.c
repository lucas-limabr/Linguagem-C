#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    #define PI 3.14
    float raio, altura, volume;

    printf("Informe o diâmetro da garrafa (cm): ");
    scanf("%f", &raio);

    printf("Informe a altura da garrafa (cm): ");
    scanf("%f", &altura);

    raio /= 2;

    volume = PI * (raio * raio) * altura;

    printf("Volume desta garrafa: %.2f cm3", volume);

    return 0;
}
