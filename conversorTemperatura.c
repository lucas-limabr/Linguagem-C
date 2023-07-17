#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float conversorTemperatura(float celsius);

int main(){

    setlocale(LC_ALL, "");

    float celsius;

    printf("Informe a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    printf("\nA temperatura de %.2f graus Celsius corresponde a %.2f graus Farenheit\n", celsius, conversorTemperatura(celsius));
}

float conversorTemperatura(float celsius){

   float farenheit = (9 * celsius / 5) + 32;

   return farenheit;
}
