#include<stdio.h>

void greeting(int n)
{
    if( n==0) return;
    printf("good morning\n");
    greeting(n-1);
    return;
}

int main()
{
    int n;
    printf("enter a number: "); //here call by value is used that means no use of pointers or call by reference
    scanf("%d",&n);

    greeting(n);
    return 0;

}
