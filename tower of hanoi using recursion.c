#include<stdio.h>

void tower(int n,char source,char Aux,char dest)
{
    if(n==1)
    {
        printf("move disk from %cc to %c \n",source,dest);
        return;
    }
    else
    {
        tower(n-1,source,dest,Aux);
        printf("move dsk %d from %c to %c",n,source,dest);

        tower(n-1,Aux,source,dest);
    }
}

int main()
{
    int n;
    char A,B,C;
    printf("enter no of disk: ");
    scanf("%d",&n);
    tower(n, A ='A', B ='B', C= 'c');
}
