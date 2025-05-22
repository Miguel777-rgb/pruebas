#include <stdio.h>
#include "..\headers\EvenOdd.h"

int main()
{
    char palabra[10];
    int num = 10;

    scanf("%9s",palabra);

    for (int i = 0; i < 10; i++)
    {
        printf("%d : %s\n", i, palabra);
    }
    
    printf("The number %d is %s\n", num, evenOddFunc(num));

    return 0;
}