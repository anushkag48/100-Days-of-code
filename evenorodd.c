/*
Author: Anushka
Date: 15-08-26
Description: Write a program to input an integer and check whether it is even or odd using ifâ€“else.
*/
#include <stdio.h>

int main(void)
{
    int n=0;
    printf("enter the number\n");
    scanf("%d",&n);
    if (n % 2 == 0)
    {
        printf("The number is even\n");
}
    else
    {
        printf("The number is odd\n");
    }
   // return 0;
}

