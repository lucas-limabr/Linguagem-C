#include<stdio.h>

void main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    //condi��o ? comando para condi��o verdadeira : comando para condi��o falsa
    num >= 0 ? printf("O valor eh positivo \n") : printf("O valor eh negativo \n");

    //num >= 0 ? num++ : num--; poderia ser assim, nesse caso num incrementaria em 1 unidade se fosse maior ou igual a zero, ou decremnetaria caso contr�rio

    printf("O numero digitado foi %d \n", num);

    system("pause");
}
