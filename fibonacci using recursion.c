#include<stdio.h>

int fib(int n)
{
    if(n<=1)
    {
        return (n);
    }
    else
    {
        return(fib(n-1) + fib(n-2));
    }

}


int main()
{
    int m=6,R;
    for(int i=0;i<=m;i++)
    {
        R = fib(i);
        printf("%d",R);
    }
}
