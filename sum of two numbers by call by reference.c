#include<stdio.h>
int add(int*a, int*b)
{
    int c;
    c = *a+*b;
    return c;
}
int main()
{
    int x,y,R;
    printf("enter 1st number: ");
    scanf("%d",&x);
    printf("enter 2nd number: ");
    scanf("%d",&y);
    R = add(&x,&y);
    printf("the sum of two numbers is %d ",R);

}
