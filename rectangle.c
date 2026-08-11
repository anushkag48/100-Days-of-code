/*
Author: Anushka
Date: 11-08-26
Description: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/
#include <stdio.h>
int main(void)
{
    int b=0,l=0,area,peri;
    printf("enter the lenght of a rectangle\n");
    scanf("%d",&l);
    printf("enter the breadth of a rectangle\n");
    scanf("%d",&b);
    area = l * b;
    peri = 2*(l+b);
    printf("area of rectangle=%d\n", area);
    printf("peri of rectanglr=%d\n", peri);
   // return 0;
}

