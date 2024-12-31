#include<stdio.h>
#include<math.h>
#include<string.h>

void increasing(int n)
{
    if(n==0) return;      //base case
    printf("%d \n",n); //before recursive call
    increasing(n-1);    //call
    printf("%d\n",n);   //code //this is called as after recursive call
    return;
}

int main()
{
    int n;
    printf("enter a number to increase: ");
    scanf("%d",&n);
    increasing(n);

    return 0;

}
/* output:
   n = 5
   5
   4
   3
   2
   1
   1
   2
   3
   4
   5 */
