#include<stdio.h>
#include<stdlib.h>

int main(){

    char nome[15];
    int ultima_posicao, i;

    printf("Escreva: ");
    gets(nome);

    //strlen me retorna a quantidade int de caracteres de uma string, sendo que a ultima posicao ocupada por uma string
    //é o strlen(vetor) - 1, pois a primeira posição de uma string em um vetor não é 1, e sim 0
    ultima_posicao = strlen(nome) - 1;

    printf("\n");
    //imprimindo uma string de trás para frente
    for(i = ultima_posicao; i >= 0; i--){
        printf("%c", nome[i]);
    }
    printf("\n");
}
