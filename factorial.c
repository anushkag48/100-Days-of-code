/*
Author: Anushka
Date: 24-08-26
Description: Write a program to calculate the factorial of a number.
*/
#include <stdio.h>
int main(void)
{
    int n,i,f=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        f = f*i;
    }
    printf("Factorial is = %d\n",f);
    // return 0;
}

