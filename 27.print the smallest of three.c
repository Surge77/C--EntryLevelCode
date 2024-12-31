#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter age of ram: ");
    scanf("%d",&a);
    printf("Enter age of shyam: ");
    scanf("%d",&b);
    printf("Enter age ajay: ");
    scanf("%d",&c);

    if(a<b  && a<c)
    {
        printf("ram is the youngest");

    }
    if(b<c && b<a)
    {
        printf("shyam is the youngest");

    }
    if(c<a && c<b)
    {
        printf("ajay is the youngest");
    }

}
