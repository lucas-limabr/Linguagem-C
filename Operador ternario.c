#include<stdio.h>

void main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    //condição ? comando para condição verdadeira : comando para condição falsa
    num >= 0 ? printf("O valor eh positivo \n") : printf("O valor eh negativo \n");

    //num >= 0 ? num++ : num--; poderia ser assim, nesse caso num incrementaria em 1 unidade se fosse maior ou igual a zero, ou decremnetaria caso contrário

    printf("O numero digitado foi %d \n", num);

    system("pause");
}
