/*
Author: Anushka
Date: 13-08-26
Description: Write a program to find and display the sum of the first n natural numbers.
*/
#include <stdio.h>

int main(void)
{
    int i, n=0,Sum=0;
    printf("enter how many numbers\n");
    scanf("%d",&n);
    for( i=1; i<=n; i++)
    {
        Sum = Sum + i;
    }
    printf("Sum= %d\n", Sum);
   // return 0;
}

