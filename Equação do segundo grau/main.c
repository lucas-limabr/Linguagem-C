#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>

struct estrutura1
{
    float a, b, c;
};

struct estrutura2
{
    float x1, x2;
};

typedef struct estrutura1 Coeficientes;
typedef struct estrutura2 Raizes;

float calculaDelta(Coeficientes coeficientes);
Raizes calculaRaizes(float delta, Coeficientes coeficientes);

int main()
{
    setlocale(LC_ALL, "");

    Coeficientes coeficientes;

    printf("Informe o valor do coeficiente a da equação do segundo grau: ");
    scanf("%f", &coeficientes.a);

    printf("Informe o valor do coeficiente b: ");
    scanf("%f", &coeficientes.b);

    printf("Informe o valor do coeficiente c: ");
    scanf("%f", &coeficientes.c);

    if(coeficientes.a == 0)
    {
        printf("Esta equação não é do segundo grau");
    }
    else if(calculaDelta(coeficientes) < 0)
    {
        printf("Esta equação não tem raízes reais");
    }
    else
    {
        Raizes raiz = calculaRaizes(calculaDelta(coeficientes), coeficientes);

        printf("\nx1 = %.2f\nx2 = %.2f", raiz.x1, raiz.x2);
    }
}

//função só para calcular o delta
float calculaDelta(Coeficientes coeficientes)
{
    float delta = pow(coeficientes.b, 2) - (4 * coeficientes.a * coeficientes.c);

    return delta;
}

//função para calcular as raízes
Raizes calculaRaizes(float delta, Coeficientes coeficientes)
{
    Raizes raiz;

    raiz.x1 = (-coeficientes.b + sqrt(delta)) / (2 * coeficientes.a);
    raiz.x2 = (-coeficientes.b - sqrt(delta)) / (2 * coeficientes.a);

    return raiz;
}
