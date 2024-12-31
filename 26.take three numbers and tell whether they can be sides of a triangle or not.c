#include<stdio.h>
int main()

    /*conditions for a valid triangle
    - the sum of two sides must be greater than the third side
    a+b>c , b+c>a , c+a>b*/
{
    int a,b,c;
    printf("enter 1st number: ");
    scanf("%d",&a);
    printf("enter 2nd number: ");
    scanf("%d",&b);
    printf("enter 3rd number: ");
    scanf("%d",&c);

    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        printf("this is a valid triangle");

    }
    else
    {
        printf("it is invalid triangle");
    }
return 0;
}
