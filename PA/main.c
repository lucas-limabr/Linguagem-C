#include <stdio.h>
#include <stdlib.h>

int main()
{
    int termo1, termo2, qtd_termos;

    printf("Informe o primeiro termo da PA: ");
    scanf("%d", &termo1);

    printf("Informe o segundo termo da PA: ");
    scanf("%d", &termo2);

    printf("Quantos termos a PA possui? ");
    scanf("%d", &qtd_termos);

    printf("Soma dos termos desta PA: %d", somaDosTermos(termo1, termo2, qtd_termos));
}

int somaDosTermos(int termo1, int termo2, int qtd_termos){

   int valor_somado = termo1, razao = termo2 - termo1;
   int soma = termo1 + razao, cont = 1;

   while(cont < qtd_termos){
    valor_somado += soma;
    soma += razao;
    cont++;
   }
   /* Se eu usasse a fórmula seria assim:
   int razao = termo2 - termo1;
   int ultimo_termo = termo1 + (qtd_termos - 1) * razao;

   int soma_pa = (termo1 + ultimo_termo) * qtd_termos / 2;
   */

   return valor_somado;
}
