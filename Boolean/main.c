#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int var = 1;

    //0 - false; 1 - true
    //se var for diferente de zero, a express�o � verdadeira
    if(var){
        printf("O conte�do da vari�vel � diferente de 0, express�o verdadeira");
    }
    else{
        printf("O conte�do da vari�vel � igual a 0, express�o falsa");
    }


    //1 - 1 = 0, ou seja, express�o falsa
    if(var - 1){
        printf("\nO conte�do da vari�vel � diferente de 0, express�o verdadeira");
    }
    else{
        printf("\nO conte�do da vari�vel � igual a 0, express�o falsa");
    }

    return 0;
}
