#ifndef EVEN_ODD_H
#define EVEN_ODD_H

#include <stdio.h>

const char* evenOddFunc(int num)
{
    return num & 1 ? "Odd" : "Even";
}

int tester(int num)
{
    printf("%d", num * 2);
}

#endif