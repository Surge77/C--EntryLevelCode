#include<stdio.h>
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    return;
}
int main()
{
    int a=5;
    int b=4;
    printf("a = %d , b = %d",a,b);
    swap(&a,&b);
}
