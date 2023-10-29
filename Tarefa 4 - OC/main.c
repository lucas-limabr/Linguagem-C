#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, k;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    k = n;

    for(i = 0; i < n; i++){
        for(j = 0; j < k; j++){
            printf(".");
        }
        k--;

        for(j = 0; j < i+1; j++){
            printf("-");
        }

        printf("\n");
    }
}
