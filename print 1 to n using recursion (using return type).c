#include<stdio.h>

int sum(int n)
{
    if(n==0 || n==1) return n;
    int recAns = n+sum(n-1);      //we can also write as return n+sum(n-1);
    return recAns;
}

int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int fact = sum(n);
    printf("the sum is %d ",fact);



    return 0;

}
