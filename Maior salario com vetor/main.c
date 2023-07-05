#include <stdio.h>
#include <stdlib.h>

float maiorSalario(int qtd_funcionario, float salario[qtd_funcionario]);

int main()
{
    int qtd_funcionario, i;

    printf("Ha quantos funcionarios na empresa? ");
    scanf("%d", &qtd_funcionario);

    float salario[qtd_funcionario];

    for(i = 0; i < qtd_funcionario; i++){
        printf("\nDigite o seu salario: ");
        scanf("%f", &salario[i]);
    }

    printf("\nO maior salario e de R$ %.2f\n", maiorSalario(qtd_funcionario, salario));
}

float maiorSalario(int qtd_funcionario, float salario[qtd_funcionario]){
    float maior_salario = salario[0];
    int i;

    for(i = 1; i < qtd_funcionario; i++){
        if(maior_salario < salario[i]){
            maior_salario = salario[i];
        }
    }

    return maior_salario;
}
