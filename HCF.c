/*
Author: Anushka
Date: 27-08-26
Description: Write a program to find the HCF (GCD) of two numbers.
*/
#include <stdio.h>

int main(void)
{
    int a, b, remainder;

    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("HCF (GCD) = %d\n", a);

    return 0;
}

