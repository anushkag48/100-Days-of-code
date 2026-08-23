/*
Author: Anushka
Date: 23-08-26
Description: Write a program to print the product of even numbers from 1 to n.
*/
#include <stdio.h>

int main(void)
{
    int n, i;
    int product = 1;

    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for (i = 2; i <= n; i = i + 2)
    {
        product = product * i;
    }

    printf("Product of even numbers from 1 to %d = %d\n", n, product);

    return 0;
}

