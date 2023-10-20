#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <windows.h>

struct estrutura{
    int matricula;
    float nota;
    char *nome;

    /*ponteiro que apontará para o próximo nó da lista, que é do tipo de mesma estrutura*/
    struct estrutura *next;
};

typedef struct estrutura Aluno;

/*função que retorna um ponteiro do tipo Aluno para atualizar na função main, o primeiro nó da lista, já que eu estou
inserindo um nó no início
Passo como parâmetro o ponteiro que aponta para a cabeça(1° item) da lista e também os dados que serão inseridos neste novo nó que é do tipo struct
*/
Aluno *insereInicio(Aluno *atual, Aluno no);

//para apenas imprimir, como eu não estou adicionando nenhum novo nó, essa função não tem retorno nenhum
void imprime(Aluno *atual);
Aluno *insereFinal(Aluno *atual, Aluno no);
Aluno *libera(Aluno *atual);
Aluno *busca(Aluno *atual, int matricula);
Aluno *remover(Aluno *atual, int matricula);

int main(){

    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    // Define codificação como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);

    /*este é o ponteiro, declarado na main que a sua funçaõ é smp apontar para a cabeça da lista, ele começa como NULL, ou seja, lista vazia*/
    Aluno *listaAlunos = NULL;

    Aluno no;
    no.matricula = 2020;
    no.nome = "João";
    no.nota = 8;

    /*o ponteiro listaAlunos precisa atualizar e receber o novo primeiro nó da lista, quando a inserção é feita no início e para a função é fundamental que ela saiba onde começa a lista, por isso, que ela recebe como parâmetro o ponteiro que aponta para o início da lista atualmente, além do nó que é o dado a ser preechido*/
    listaAlunos = insereInicio(listaAlunos, no);

    no.matricula = 2023;
    no.nome = "Lucas";
    no.nota = 10;

    listaAlunos = insereInicio(listaAlunos, no);

    int key = 2020;
    busca(listaAlunos, key);

    no.matricula = 2030;
    no.nome = "Daniel";
    no.nota = 7;

    insereFinal(listaAlunos, no);

    //passo o primeiro nó para a função, ou seja, a cabeça da lista
    imprime(listaAlunos);

    SetConsoleOutputCP(CPAGE_DEFAULT);
}

Aluno *insereInicio(Aluno *atual, Aluno no){

    /*a função retorna o novo ponteiro e nó que será agora a cabeça da lista e apontará para o próximo nó da lista*/
    Aluno *novo = (Aluno*)malloc(sizeof(Aluno));

    /*o ponteiro novo aponta para cada campo da struct e a partir daí o parâmetro recebido nesta função é passado para cada campo da struct*/
    novo->matricula = no.matricula;
    novo->nome = no.nome;
    novo->nota = no.nota;

    if (atual == NULL) //lista vazia
    {
        //se a lista estava vazia, o ponteiro que aponta para o próximo nó depois deste novo é vazio
        novo->next = NULL;
    }
    else{
        //senão, o ponteiro que aponta para o próximo nó, apontará para o nó que até aqui era o primeiro da lista, e a partir desta linha será o segundo
        novo->next = atual;
    }

    //aqui é o retorno deste nó que eu acabei de inserir na lista, que agr é a cabeça e terá lá na main o ponteiro listaAlunos apontando para ele
    return novo;
}

void imprime(Aluno *atual){
    if (atual == NULL)
    {
        printf("A lista está vazia!");
    }
    printf("\n");
    //enquanto tiver nó na lista
    while(atual != NULL){
        printf("\nMatrícula: %d", atual->matricula);
        printf("\nNome: %s", atual->nome);
        printf("\nNota: %.2f", atual->nota);
        printf("\n");

        //o ponteiro atual precisa receber o endereço que o next aponta, que é para o próximo nó da lista, agora, atual irá referenciar o próximo nó
        atual = atual->next;
    }
}

Aluno *busca(Aluno *atual, int matricula){
    if(atual == NULL){
        printf("A lista está vazia!");
    }
    while(atual != NULL){
       if(atual->matricula == matricula){
        printf("\nMatrícula: %d", atual->matricula);
        printf("\nNome: %s", atual->nome);
        printf("\nNota: %.2f", atual->nota);
       }
       atual = atual->next;
    }
}

Aluno *insereFinal(Aluno *atual, Aluno no){
    if(atual == NULL){
        insereInicio(atual, no);
    }
    else{
        Aluno *backup_head = atual;

        while(atual->next != NULL){
            atual = atual->next;
        }

        Aluno *novo = (Aluno*)malloc(sizeof(Aluno));
        novo->matricula = no.matricula;
        novo->nome = no.nome;
        novo->nota = no.nota;

        atual->next = novo;

        return backup_head;
    }
}
