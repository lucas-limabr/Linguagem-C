#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "");

    int a = 10;
    int b = 20;

    printf("Pr�-incremento = %d", ++a);
    printf("\n%d", a);

    printf("\nP�s-incremento = %d", b++);
    printf("\n%d", b);

    int valor1 = 30;

    printf("\nA soma � = %d", valor1 + 20);
    printf("\n%d", valor1);
}

