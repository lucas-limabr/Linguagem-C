#include <stdio.h>
#include <stdlib.h>

void imprimirCaractere(char caractere, int qtd);

int main()
{
    char caractere;
    int qtd;

    printf("Informe o caractere que voce deseja: ");
    scanf("%c", &caractere);

    printf("Informe a quantidade de vezes que este caractere sera exibido na tela: ");
    scanf("%d", &qtd);

    imprimirCaractere(caractere, qtd);
}

void imprimirCaractere(char caractere, int qtd){
    int cont;

    printf("\n");

    for(cont = 0; cont < qtd; cont++){
        printf("%c ", caractere);
    }
}
