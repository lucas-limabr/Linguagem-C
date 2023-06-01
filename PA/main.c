#include <stdio.h>
#include <stdlib.h>

int main()
{
    int termo1, termo2, qtd_termos, razao;

    printf("Informe o primeiro termo da PA: ");
    scanf("%d", &termo1);

    printf("Informe o segundo termo da PA: ");
    scanf("%d", &termo2);

    printf("Quantos termos a PA possui? ");
    scanf("%d", &qtd_termos);

    printf("%d", somaDosTermos(termo1, termo2, qtd_termos));
}

int somaDosTermos(int termo1, int termo2, int qtd_termos){

    int cont = 0, result = 0, razao;
    razao = termo2 - termo1;

    while(cont < qtd_termos){
        result = termo1 + termo2;
        termO1 += razao;
        termo2 += razao;
    }

    return result;
}
