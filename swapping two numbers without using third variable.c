#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("enter a: ");
    scanf("%d",&a);
    int b;
    printf("enter b: ");
    scanf("%d",&b);

    a = a + b;     //this three are the formula for swapping without using third variable
    b = a - b;
    a = a - b;

    printf("the value of a is %d \n",a);
    printf("the value of b is %d \n",b);

    return 0;



}
