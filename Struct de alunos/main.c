#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

void imprimeSituacao();

struct estrutura
{
    int matricula, faltas;
    float nota1, nota2;
};

typedef struct estrutura Aluno;

int main()
{
    setlocale(LC_ALL, "");

    Aluno aluno;

    printf("Digite o seu numero de matricula:");
    scanf("%d", &aluno.matricula);

    printf("Informe a sua primeira nota: ");
    scanf("%f", &aluno.nota1);

    printf("Informe a sua segunda nota: ");
    scanf("%f", &aluno.nota2);

    printf("Informe a sua quantidade de faltas: ");
    scanf("%d", &aluno.faltas);

    imprimeSituacao(aluno);
}

void imprimeSituacao(Aluno aluno)
{
    float media = (aluno.nota1 + aluno.nota2) / 2;

    printf("\nAluno %d, suas notas:", aluno.matricula);
    printf("\nNota 1: %.2f", aluno.nota1);
    printf("\nNota 2: %.2f", aluno.nota2);
    printf("\nQuantidade de faltas: %d", aluno.faltas);

    if(media >= 6 && aluno.faltas < 10)
    {
        printf("\nVocê está aprovado!");
    }
    else
    {
        printf("\nVocê está reprovado!");
    }
}
