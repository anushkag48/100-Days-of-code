/*
Author: Anushka
Date: 24-08-26
Description: Write a program to reverse a given number.
*/
#include <stdio.h>

int main(void)
{
    int n, reverse = 0, digit;

    printf("Enter a number: \n");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("Reverse = %d\n", reverse);

    return 0;
}

