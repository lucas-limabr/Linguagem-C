#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int numero, cont, i = 1, resposta_user, qtd_pontos = 0;

    printf("A tabuada de qual número você deseja? ");
    scanf("%d", &numero);

    printf("\nInforme o valor para cada multiplicação: ");

    for(cont = 1; cont <= 10; cont++)
    {

        printf("\n%d x %d = ", numero, cont);
        scanf("%d", &resposta_user);

        if(resposta_user == (numero*cont))
        {
            qtd_pontos++;
        }
    }

    printf("\nResultados da tabuada:");

    while(i <= 10){
        printf("\n%d x %i = %d", numero, i, numero*i);
        i++;
    }

    printf("\n\nVocê atingiu %d pontos", qtd_pontos);

    if(qtd_pontos == 10){
        printf("\nExcelente");
    }
    else if(qtd_pontos == 9){
        printf("\nEstude mais um pouquinho");
    }
    else if(qtd_pontos == 8){
        printf("\nEstude mais");
    }
    else{
        printf("\nEstude muito mais");
    }
}
