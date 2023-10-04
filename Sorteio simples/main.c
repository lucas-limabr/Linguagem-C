#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<time.h>

int main()
{
    printf("Numero do dado sorteado: %d", dado6());
}

int dado6(){
    srand(time(NULL));

    int random = rand() % 6 + 1;
    return random;
}
