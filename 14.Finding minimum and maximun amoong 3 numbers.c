#include<stdio.h>
#include<stdlib.h>

main()
{
    int a,b,c;
    int max,min;
    printf("enter a: ");
    scanf("%d",&a);

    printf("enter b: ");
    scanf("%d",&b);

    printf("enter c: ");
    scanf("%d",&c);

    max = a;
    min = b;
    if (a<b)
    {
        max = b;
        min = a;
    }
    if(c > max)
        max = c;
    if(c<min)
      min = c;

      printf("maximum between 3 numbers is = %d\n",max);
      printf("minimum betweeen 3 numbers is = %d\n",min);



}
