/*
Author: Anushka
Date: 05-09-26
Description: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/
#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (i = 4; i >= 1; i--)
    {
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

