/*
Author: Anushka
Date: 06-09-26
Description: Read and print elements of a one-dimensional array.
*/
#include <stdio.h>

int main(void)
{
    int i, a[5] = {10,20,30,40,50};
    printf("[");
    for(i=0;i<5;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("]\n");
    return 0;
}

