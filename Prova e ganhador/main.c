#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<locale.h>
#define MAX 10

struct estrutura{
    int maior_nota, numero_candidato;
};

typedef struct estrutura dadosCandidato;

dadosCandidato candidatosClassificados(int nota_candidato[MAX]);

int main()
{
    setlocale(LC_ALL, "");

    int nota_candidato[MAX], i;
    dadosCandidato dados_candidato;

    srand(time(NULL));

    for(i = 0; i < MAX; i++){
        nota_candidato[i] = rand() % 1000 + 1;
         printf("\nNota do candidato %d: %d", i + 1, nota_candidato[i]);
    }

    dados_candidato = candidatosClassificados(nota_candidato);
    printf("\n\nA maior nota é %d do candidato de número %d\n", dados_candidato.maior_nota, dados_candidato.numero_candidato + 1);
}

dadosCandidato candidatosClassificados(int nota_candidato[MAX]){

    dadosCandidato dados_candidato;
    int i;

    dados_candidato.maior_nota = nota_candidato[0];

    for(i = 0; i < MAX; i++){
        if(nota_candidato[i] > dados_candidato.maior_nota){
            dados_candidato.maior_nota = nota_candidato[i];
            dados_candidato.numero_candidato = i;
        }
    }

    return dados_candidato;
}
