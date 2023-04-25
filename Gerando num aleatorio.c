#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    srand ((unsigned)time(NULL));

    //variavel que recebe o resto da divisao por 10 (nesse caso aleatorio entre 0 e 10)
    int aleatorio = rand() %11;

    printf ("%d \n", aleatorio);

    system("pause");
}
