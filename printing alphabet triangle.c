#include<stdio.h>
int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=i;j++)   //here Asciii values are used and type casting is used
        {
            int d = a+64;
            char ch = (char)d;  //typecasting it means to print the character value of d
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
}
