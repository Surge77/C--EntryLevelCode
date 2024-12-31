#include<stdio.h>
#include<stdlib.h>

main()

{
    double num1,num2;
    printf("Enter num1: ");
    scanf("%lf",&num1);

    printf("Enter num2: ");
    scanf("%lf",&num2);

    if(num1>num2)
        printf("maximum: %lf\n minimum: %lf\n",num1,num2);
    else
        printf("%maximum: %lf\n minimum: %lf\n",num2,num1);


}
