#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void concatenaString(char *string1, char *string2);

int main()
{
    char *string1 = (char*) malloc(sizeof(char) * 30);
    char *string2 = (char*) malloc(sizeof(char) * 30);

    printf("Digite a primeira string: ");
    gets(string1);

    printf("Digite a segunda string: ");
    gets(string2);

    concatenaString(string1, string2);

    printf("\n%s", string1);

}

void concatenaString(char *string1, char *string2){

    strcat(string1, string2);
}
