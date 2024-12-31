#include<stdio.h>
main()
{
    int a,b,c,d;
    printf("enter 1st number: ");
    scanf("%d",&a);
    printf("enter 2nd number: ");
    scanf("%d",&b);
    printf("enter 3rd number: ");
    scanf("%d",&c);
    printf("enter 4th number: ");
    scanf("%d",&d);

    if(a>b && a>c && a>d)
    {
        printf("%d is the greatest",a);

    }
    if(b>c && b>d && b>a)
    {
        printf("%d is the greatest",b);

    }
    if(c>d && c>a && c>b)
    {
        printf("%d is the greatest",c);
    }
    if(d>a && d>b && d>c)
        printf("%d is the greatest",d);
}
