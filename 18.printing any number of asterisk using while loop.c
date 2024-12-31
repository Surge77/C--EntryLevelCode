#include<stdio.h>
#include<stdlib.h>

main()
{
    int n;
    printf("Enter number of asterisks: ");
    scanf("%d",&n);


    while (n > 0)
    {
        printf("*");
        n = n-1;
    }
    printf("\n");
}


