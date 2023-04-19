#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float hipotenusa(float cateto1, float cateto2){
return sqrt(cateto1 * cateto1 + cateto2 * cateto2);
}

void main()
{
    float vcateto1, vcateto2, result;

    printf("Digite o cateto 1: ");
    scanf("%f", &vcateto1);

    printf("Digite o cateto 2: ");
    scanf("%f", &vcateto2);

    result = hipotenusa(vcateto1, vcateto2);

    printf("Hipotenusa = %.2f \n", result);

    system("pause");
}
