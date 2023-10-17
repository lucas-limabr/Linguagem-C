#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct estrutura{
    int matricula;
    float nota;
    char *nome;

    /*ponteiro que apontará para o próximo nó da lista, que é do tipo de mesma estrutura*/
    struct estrutura *next;
};

typedef struct estrutura Aluno;

Aluno *insereInicio(Aluno *atual, Aluno no);
Aluno *insereFinal(Aluno *atual, Aluno no);
void imprime(Aluno *atual);
Aluno *libera(Aluno *atual);
Aluno *busca(Aluno *atual, int matricula);
Aluno *remover(Aluno *atual, int matricula);

int main(){
    setlocale(LC_ALL, "");
    Aluno *listaAlunos = NULL;

    Aluno no;
    no.matricula = 2020;
    no.nome = "Joao";
    no.nota = 8;

    no.matricula = 2023;
    no.nome = "Ze";
    no.nota = 5;

    listaAlunos = insereInicio(listaAlunos, no);
    imprime(listaAlunos);
}

Aluno *insereInicio(Aluno *atual, Aluno no){

    Aluno *novo = (Aluno*)malloc(sizeof(Aluno));

    novo->matricula = no.matricula;
    novo->nome = no.nome;
    novo->nota = no.nota;

    if (atual == NULL)
    {
        novo->next = NULL;
    }
    else{
        novo->next = atual;
    }

    return novo;
}

void imprime(Aluno *atual){
    if (atual == NULL)
    {
        printf("A lista está vazia!");
    }
    while(atual != NULL){
        printf("\nMatrícula: %d", atual->matricula);
        printf("\nNome: %s", atual->nome);
        printf("\nNota: %.2f", atual->nota);
        printf("\n");

        atual = atual->next;
    }
}
