#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

struct Pessoa{
    float altura, crescimento;
};

int calculaAnos(struct Pessoa chico, struct Pessoa ze);

int main()
{
   setlocale(LC_ALL, "");

   struct Pessoa chico;
   chico.altura = 1.5;
   chico.crescimento = 0.02;

   struct Pessoa ze;
   ze.altura = 1.1;
   ze.crescimento = 0.03;

   printf("Levará %d anos para que a altura de Ze ultrapasse a altura de Chico", calculaAnos(chico, ze));
}

int calculaAnos(struct Pessoa chico, struct Pessoa ze){
    int qtd_anos = 0;

    while(ze.altura <= chico.altura){
       ze.altura += 0.03;
       chico.altura += 0.02;
       qtd_anos++;
    }

    return qtd_anos;
}
