#include <stdio.h>
#include <stdlib.h>

struct estrutura{
    float a1, a2;
    int n;
};

typedef struct estrutura PG;

float calculoPG(PG pg);

int main()
{
    PG pg;

    printf("Informe o primeiro termo da PG: ");
    scanf("%f", &pg.a1);

    printf("Informe o segundo termo da PG: ");
    scanf("%f", &pg.a2);

    printf("Informe quantos termos vc quer para fazer a soma dessa PG: ");
    scanf("%d", &pg.n);

    printf("A soma dos %d primeiros termos desta PG = %.2f", pg.n, calculoPG(pg));
}

float calculoPG(PG pg){

    float razao = pg.a2 / pg.a1, valor_somado = pg.a1, razao_x_termo = pg.a1 * razao;
    int cont = 1;

    //no primeiro laço eu já tenho a soma dos 2 primeiros termos
    while(cont < pg.n){
        valor_somado += razao_x_termo;
        razao_x_termo *= 3;
        cont++;
    }

    return valor_somado;
}
