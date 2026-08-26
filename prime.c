/*
Author: Anushka
Date: 26-08-26
Description: Write a program to check if a number is prime.
*/
#include <stdio.h>
int main(void)
{
    int n,i,count=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (n % i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("it is a prime number\n");
    }
    else
    {
        printf("it is not a prime number\n");
    }
    // return 0;
}

