/*
Author: Anushka
Date: 06-11-26
Description: Assign explicit values starting from 10 and print them.
*/
#include <stdio.h>

enum Letters {
    A = 10,
    B,
    C
};

int main(void)
{
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);
    return 0;
}

