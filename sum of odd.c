/*
Author: Anushka
Date: 23-08-26
Description: Write a program to print the sum of the first n odd numbers.
*/
#include <stdio.h>

int main(void)
{
    int n, i, odd, sum = 0;

    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        odd = 2 * i - 1;
        sum = sum + odd;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}

