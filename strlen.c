#include<stdio.h>
#include<stdlib.h>

int main(){

    char nome[15];
    int ultima_posicao, i;

    printf("Escreva: ");
    gets(nome);

    //strlen me retorna a quantidade int de caracteres de uma string, sendo que a ultima posicao ocupada por uma string
    //� o strlen(vetor) - 1, pois a primeira posi��o de uma string em um vetor n�o � 1, e sim 0
    ultima_posicao = strlen(nome) - 1;

    printf("\n");
    //imprimindo uma string de tr�s para frente
    for(i = ultima_posicao; i >= 0; i--){
        printf("%c", nome[i]);
    }
    printf("\n");
}
