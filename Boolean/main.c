#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int var = 1;

    //0 - false; 1 - true
    //se var for diferente de zero, a expressão é verdadeira
    if(var){
        printf("O conteúdo da variável é diferente de 0, expressão verdadeira");
    }
    else{
        printf("O conteúdo da variável é igual a 0, expressão falsa");
    }


    //1 - 1 = 0, ou seja, expressão falsa
    if(var - 1){
        printf("\nO conteúdo da variável é diferente de 0, expressão verdadeira");
    }
    else{
        printf("\nO conteúdo da variável é igual a 0, expressão falsa");
    }

    return 0;
}
