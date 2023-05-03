#include<stdio.h>
#include<stdlib.h>

float calcdesconto(float valor, float desconto){
return(valor - (valor * desconto /100));
}

void main()
{
    float gvalor, gdesconto, gresult;

    printf("Qual e o valor do produto: ");
    scanf("%f", &gvalor);

    printf("Qual e o percentual de desconto: ");
    scanf("%f", &gdesconto);

    gresult = calcdesconto(gvalor, gdesconto);

    printf("O novo valor com o percentual de desconto informado e %.2f reais \n", gresult);

    system("pause");
}
