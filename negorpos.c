/*
Author: Anushka
Date: 15-08-26
Description: Write a program to input an integer and check whether it is positive, negative or zero using nested ifâ€“else.
*/
#include <stdio.h>
int main(void)
{
    int n=0;
    printf("enter the number\n");
    scanf("%d",&n);
    if (n >0)
    {
        printf("The number is positive\n");
}
    else if (n<0)
    {
        printf("The number is negative\n");
    }
    else
    {
        printf("The number is zero\n");
    }
   // return 0;
}

