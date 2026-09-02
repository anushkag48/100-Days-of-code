/*
Author: Anushka
Date: 02-09-26
Description: Write a program to print the following pattern:
1
12
123
1234
12345
*/
#include <stdio.h>
int main(void)
{
    int i,j,n;
    printf("enter the number of rows\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    // return 0;
}

