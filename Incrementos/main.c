#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1, j=2, k=3, l=4;

    //i = 2
    i++;

    //k = 3; i = 3
    k = ++i;

    //l = 2; j = 3
    l= j++;

    //j = 4
    ++j;

    printf("%d \n%d \n%d \n%d", i, j, k, l);

    return 0;
}
