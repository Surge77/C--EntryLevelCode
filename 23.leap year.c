#include<stdio.h>

int main()
{
    int y;
    printf("Enter the year : ");
    scanf("%d",&y);
    if(y%4==0)
    {
        printf("it is a leap year");

    }
   else
    {
        printf("it is not a leap year");
    }

}
