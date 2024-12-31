// printing the given pattern
/*  ##*##
    ##*##
    *****
    ##*##
    ##*##

or
      *
      *
    *****
      *
      *          */

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==n/2+1 || j==n/2+1)   //this is the formula to select the middle line of pattern
                printf("*");            //we can also initialize a = n/2+1 and print a
                else
                printf(" ");
        }
        printf("\n");
    }





}
