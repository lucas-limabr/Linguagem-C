#include<stdio.h>
#include<stdlib.h>

void main()
{
    char str1[30] = "Curso ";
    char str2[20] = "de programacao em C ";

    strncat(str1, str2);

    printf("str1 = %s \n", str1);

    system("pause");

}
