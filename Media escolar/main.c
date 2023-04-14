#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float nota1, nota2, nota3, nota4, media;
    int faltas;

    printf("Informe sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe sua terceira nota: ");
    scanf("%f", &nota3);

    printf("Informe sua quarta nota: ");
    scanf("%f", &nota4);

    printf("Informe sua quantidade de faltas no período letivo: ");
    scanf("%d", &faltas);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if(media > 60 && faltas < 18){
        printf("Aluno aprovado");
    }
    else{
        printf("Aluno reprovado");
    }

    return 0;
}
