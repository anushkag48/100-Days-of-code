/*
Author: Anushka
Date: 01-09-26
Description: Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/
#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

