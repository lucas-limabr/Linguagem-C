#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int candidatosClassificados(int nota_candidato[5]);

int main()
{
    int nota_candidato[5], i;

    srand(time(NULL));

    for(i = 0; i < 5; i++){
        nota_candidato[i] = rand() % 1000 + 1;
    }

    printf("\nMaior nota é %d candidatos\n", candidatosClassificados(nota_candidato));
}

int candidatosClassificados(int nota_candidato[5]){

    int i, numero_candidato;
    int maior_nota = nota_candidato[0];

    for(i = 0; i < 5; i++){
        if(nota_candidato[i] > maior_nota){
            maior_nota = nota_candidato[i];
            numero_candidato = i;
        }
    }

     for(i = 0; i < 5; i++){
        printf("\n%d", nota_candidato[i + 1]);
    }

    printf("\nIdentificacao: %d", numero_candidato);

    return maior_nota;
}
