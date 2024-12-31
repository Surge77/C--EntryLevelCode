#include<stdio.h>
 main()
{
    int n;
    printf("Enter a integer: ");
    scanf("%d",&n);

    if(n<0)
    {
        n = n * (-1);
        printf("the absolute value is : %d",n);
    }
    else
    {
        printf("the absolute value is : %d ",n);
    }
}
