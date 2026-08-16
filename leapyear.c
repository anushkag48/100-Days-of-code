/*
Author: Anushka
Date: 16-08-26
Description: Write a program to input a year and check whether it is a leap year or not using conditional statements.
*/
#include <stdio.h>

int main(void)
{
    int year=0;
    printf("enter a year\n");
    scanf("%d",& year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("The year is a leap year\n");
}
    else
    {
        printf("The year is not a leap year\n");
    }
   // return 0;
}

