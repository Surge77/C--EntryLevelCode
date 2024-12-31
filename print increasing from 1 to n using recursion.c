#include<stdio.h>

//this is parameterized way of solving the problem it means setting the starting and ending parameters

void increasing(int x,int n)
{
    if(x>n) return;
    printf("%d \n",x);
    increasing(x+1,n);
    return;
}

int main()
{
    int n;
    printf("enter a number to increase: ");
    scanf("%d",&n);
    increasing(1,n);

    return 0;

}
