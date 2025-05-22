#include <stdio.h>
#include "..\headers\EvenOdd.h"

int main()
{
    char palabra[10];

    scanf("%9s",palabra);

    printf("%s\n", palabra);

    int num = 5;

    printf("The number %d is %s\n", num, evenOddFunc(num));

    tester(num);

    return 0;
}